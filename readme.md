# Film and Darkroom User (FADU) F-Stop Enlarger Timer

An Android based darkroom enlarger timer using f-stop timing techniques.


The app is built using the MIT App Inventor 2 development environment [AI2](https://appinventor.mit.edu)

The electronically literate can add hardware to switch the lamp on and off via the phone's WiFi.  See the manual for details.  

Even without WiFi switching hardware, the timer has been made useful when manually switching the enlarger's lamp by adding a count-in delay and providing a continuous test-strip mode with audio warnings before each subsequent strip exposure.



## Latest

### 16-Feb-2021: Version 1.4.1

1) Added ability to select a Sonoff DIY mode R3 device.  Tested with a Mini R3.  Option "BASIC R3" added to the Settings tab's "Lamp Controller" section.   To use: Place your R3 device into DIY mode per Sonoff's instructions.  Once working in DIY mode, set the IP Address of the R3 device in the IP ADDRESS section in the SETTINGS tab (just the IP address, do not add the port etc - this is added in the app's code)  e.g. ###192.168.0.22 

2) Also added ability to use the camera's lamp LED.  Not entirely sure what use this is except for demo purposes.  Possibly for flashing paper if you add a diffuser over the LED and use the Delay setting to give you time to raise it to the right height after setting the time?

3)  Added individual volume controls for the various beeps and buzzes (scroll down the SETTINGS tab if you don't see them).  A bit tricky to use due to being small (and no way I could find in App Inventor to make them larger).



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
