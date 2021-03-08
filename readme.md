# Film and Darkroom User (FADU) F-Stop Enlarger Timer


**NOTE THIS IS THE DEVELOPMENT BRANCH - THIS VERSION MAY OR MAY NOT HAVE UNEXPECTED ADDITIONAL "FEATURES" THAT CAUSE IT TO NOT WORK CORRECTLY**


### 08-Mar-2021: 1.5.1 update [believed stable]


Google still not approved 1.5.0.  In the meantime, in a flurry of activity (and lock-down boredom) ...


Change log:

1)  Added functionality to switch the display between Red and Green - potentially useful for colour printing.  Keep the backlight brightness as low as possible as colour paper is very sensitive.  The setting is stored between restarts.

2)  Can now sequence through the first 5 memories.  Lamp hardware is disabled during this time.  If the RUN button is not visible on smaller screens, use a long-press on the FOCus button instead.  Honours the Delay and Tick Mode settings.

### 04-Mar-2021: 1.5.1 first update [believed stable]

Google are taking forever to approve the 1.5.0 update.  I will let them authorise the existing update before uploading this one...

I have posted 1.5.1 in the wip branch which- have started to add the ability to switch between Red and Green displays.  This should be of use for colour printers but as colour paper is much more sensitive than B&W paper make sure the brightness is low and preferably use some black card or similar to shield the timer from the paper.  It is unlikely that the phone's green will be in colour paper's insensitivity sweet-spot (if modern colour paper even has one) but our eyes are most sensitive to green so worst-case, using green allows the backlight to be kept dimmer than it would be if it was still red.  I do not print in colour so I have no practical experience to offer...


### 28-Feb-2021 Pre-release 1.5.0 posted.

Have uploaded the latest revision of the manual 1.5.0 (unfinished).

1) Added [PULSE R3] mode.  Similar to (2) below but uses the "inching" mode of the R3 DIY mode API to send fixed duration lamp-on commands to the Basic R3 or Mini in DIY mode. For example, we send a command that says "switch on for 17.5 seconds and then switch yourself off".  So the app does not need to send the OFF signal and hence avoids random timing delays through the router.  Set [PULSE R3] to use.  

Sonoff have once again messed things up - in this case by only allowing multiples of half a second to be set.  This does not help with accuracy, but is not as bad as it first seems for typical lamp ON times of several seconds and it does at least mean that the timing is consistent, which you could argue is more important.  15.3 seconds on the timer's display (or calculated by the timer) will actually result in 15.5 seconds of light but at least it will always be 15.5 seconds with no variation caused by random router delays.  

The worst-case error when rounding to the nearest 0.5s is 0.2s - i.e. x.1 and x.2 will round down to x.0; x.3 and x.4 will round up to x.5; x.6 and x.7 will round down to x.5; x.8 and x.9 will round up to x+1.0.  The percentage error depends on how many seconds your base time is.  For example, 10.7 seconds will round down to 10.5s which is an error of approx 1/37th of a stop which is not detectable by the human eye (and will probably give a densitometer a run for its money!).  Longer times will be proportinally more accurate but shorter times will be worse - 5.3s for example would round to 5.5s which is an error of 1/19th of a stop - which I think is still very acceptable.  These calculations show that this is a valid mode for reasonable accuracy so I have incorporated it into the timer.


2) Added the ability to select a Sonoff R3 device in DIY mode.  Tested with a Mini R3 running version 3.5 of the Sonoff firmware.  Option "BASIC R3" added to the Settings tab's "Lamp Controller" section.   To use: Place your R3 device into DIY mode per Sonoff's instructions.  Once working in DIY mode, set the IP Address of the R3 device in the IP ADDRESS section in the SETTINGS tab (just the IP address, do not add the port etc - this is added in the app's code):  e.g. **192.168.0.22** It may be a freak of my network router but I had to use Fing on my phone to find the device's IP address - it did not appear on my router's list of connected devices - very odd.
 
The downside of this mode is that all the on and off signals go via your WiFi router which adds random delays of typically 5 - 100ms on my network - and occasionally more.  100ms is just under 1/8th of a stop for a 1 second time exposure so you will need to consider if this is still sufficient accuracy for your purposes. In practice, I could only empirically detect a delay once in every ten or twenty switches.  If you have a spare WiFi router then creating a separate network and dedicating this to the timer with no other devices or Internet connection would make these delays both smaller and much less random in duration allowing you to use the timer's Lamp Adjust setting to compensate. I have not tried this but it should work well (in theory!).
 

3) Added the ability to use the camera's flash LED.  I'm not entirely sure what use this is except for demo purposes.  Possibly could be used for flashing paper if you add a diffuser over the LED and use the Delay setting to give you time to raise it to the right height after setting the time.  Light activated relay boards do exist but keeping the bright light out of the rest of the darkroom may prove difficult...


4) Added individual volume controls for the various beeps and buzzes (scroll down the SETTINGS tab if you don't see them).  A bit tricky to use due to being small (and no way I could find in App Inventor to make them larger).  The settings are reloaded the next time the app is launched.


5) You no longer need to use the [SET] button on the STRIPS tab: the strips times automatically update when changing the base time.  Refreshing the strip times for each tap of the display does slow things down a little but this should not be a major irritation and avoids the error of forgetting to tap the [SET] button.  The [SET] button is retained although it is now mostly redundant.


The manual still requires updating from release version 1.4.




## Getting Started

There are two branches:

	1) master : holds the currently released version of the app as available on the google play store.
	
	2) wip : holds the current work-in-progress development version.  This version may not be stable.



### Prerequisites

To edit the app you will need an App Inventor 2 login and import the AIA project file into your My Projects area.
