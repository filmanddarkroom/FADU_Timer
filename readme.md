# Film and Darkroom User (FADU) F-Stop Enlarger Timer


**NOTE THIS IS THE DEVELOPMENT BRANCH - THIS VERSION MAY OR MAY NOT HAVE UNEXPECTED ADDITIONAL "FEATURES" THAT CAUSE IT TO NOT WORK CORRECTLY**



### 16-Feb-2021: Version 1.4.1

1) Added ability to select a Sonoff R3 device in DIY mode.  Tested with a Mini R3 running version 3.5 of the Sonoff firmware.  Option "BASIC R3" added to the Settings tab's "Lamp Controller" section.   To use: Place your R3 device into DIY mode per Sonoff's instructions.  Once working in DIY mode, set the IP Address of the R3 device in the IP ADDRESS section in the SETTINGS tab (just the IP address, do not add the port etc - this is added in the app's code):  e.g. **192.168.0.22** It may be a freak of my network router but I had to use Fing on my phone to find the device's IP address - it did not appear on my router's list of connected devices - very odd.
 
The downside of this mode is that all the on and off signals go via your WiFi router which adds random delays of typically 5 - 100ms on my network and occasionally more.  100ms is just under 1/8th of a stop for a 1 second time exposure so you will need to consider if this is still sufficient accuracy for your purposes.  If you have a spare WiFi router then creating a separate network and dedicating this to the timer would make these delays both smaller and much less random in duration allowing you to use the timer's Lamp Adjust setting to compensate. I have not tried this but it should work well (in theory!).
 

2) Added the ability to use the camera's flash LED.  I'm not entirely sure what use this is except for demo purposes.  Possibly could be used for flashing paper if you add a diffuser over the LED and use the Delay setting to give you time to raise it to the right height after setting the time.  Light activated relay boards do exist but keeping the bright light out of the rest of the darkroom may prove difficult...


3) Added individual volume controls for the various beeps and buzzes (scroll down the SETTINGS tab if you don't see them).  A bit tricky to use due to being small (and no way I could find in App Inventor to make them larger).  The settings are reloaded the next time the app is launched.



### 14-Apr-2019: Version 1.4.0 released.

1) Single strip mode [SINGLE] added for when you are using individual strips of paper instead of making multiple strips across a sheet of paper. Each strip-time is for the whole f-stop calculated exposure.

2) The Memories now display their contents.

3) Now scales (mostly) correctly for tablets.

4) Main tab's F-stop Mode now reduced as all it's functionality now moved to the Strips tab.

Space was made for displaying the memory's contents by shoving the now largely obsolete f-stop calculation section on the Main tab to the right of the display.  I have left it as it is a quick way of getting incremental values for manual use without having to use the Strips mode tab.

I have updated the manual to include the changes since 1.3.0 and the instructions now include instructions for programming the Sonoff Basic Wi-Fi switch.  I may make a reprogrammed version of this available on Tindie - TBC.


Some small tweaks:

Changed the Strips tab left side config title to "SET MODE" (still don't like it, but will have to do for now).  

Changing strip Mode to [SINGLE] now updates the strip-time list - other selections already did this but now this does so too.


======

March-2019:  On the STRIPS tab I have added a "SINGLE" mode.  This mode may be used when you want to take your test strips from the same area of the negative each time.  This is useful when you have a very important area, or if the rest of the negative does not have the full range of tones necessary to get good test strips.  It is similar to the MANUAL mode, but each strip exposure is the full f-stop exposure time for that strip and not an incemental one based on the previous strip.  This update makes the MAIN tab's F-stop Mode section efectively obsolete.

=======



## Getting Started

There are two branches:

	1) master : holds the currently released version of the app as available on the google play store.
	
	2) wip : holds the current work-in-progress development version.  This version may not be stable.



### Prerequisites

To edit the app you will need an App Inventor 2 login and import the AIA project file into your My Projects area.
