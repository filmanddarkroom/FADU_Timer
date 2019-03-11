/*** Create a WiFi access point and provide a web server on it ***/

#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>

/*** Use AP IP Addr: 10,0,0,1 ***/
IPAddress local_IP(10,0,0,1);
IPAddress gateway(10,0,0,1);
IPAddress subnet(255,0,0,0);

/*** AP Credentials - feel free to change ***/
const char *ssid = "FADUTimer";
const char *password = "fadu1234"; // Reccommend changing this - must be at least 8 characters

/*** Start the web sever ***/
ESP8266WebServer server(80);

/*** routine to send on connect to web server ***/
void handleRoot() {
  server.send(200, "text/html", "<h1>You are connected</h1>");
}

/*** sonoff stuff ***/
int gpio13Led = 13;
int gpio12Relay = 12;


/**** Initialise ***/
void setup() {
  delay(1000);
  Serial.begin(115200);
  Serial.println();

  Serial.print("Configuring access point...");
  Serial.println(WiFi.softAPConfig(local_IP, gateway, subnet) ? "Ready" : "Failed!");

  Serial.print("Setting soft-AP SSID & Pwd... ");
  Serial.println(WiFi.softAP(ssid, password) ? "Ready" : "Failed!");

  /*** Debug config OK ***/
  IPAddress myIP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(myIP);
  server.on("/", handleRoot);

  /*** sonoff stuff ***/
  pinMode(gpio13Led, OUTPUT);
  digitalWrite(gpio13Led, HIGH);
  
  pinMode(gpio12Relay, OUTPUT);
  digitalWrite(gpio12Relay, LOW);


/*** Routines to handle API calls - really complicated...?! ***/

/* "/on" = switch enlarger lamp on */
  server.on("/on", [](){
    digitalWrite(gpio13Led, LOW);
    digitalWrite(gpio12Relay, HIGH);
    delay(500);
  });

/* "/off" = switch enlarger lamp off */
  server.on("/off", [](){
    digitalWrite(gpio13Led, HIGH);
    digitalWrite(gpio12Relay, LOW);
    delay(500); 
  });

  server.begin();
  Serial.println("HTTP server started");
  
}

void loop() {
  server.handleClient();
}

