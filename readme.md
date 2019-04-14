# Film and Darkroom User (FADU) F-Stop Enlarger Timer

An Android based darkroom enlarger timer using f-stop timing techniques.


The app is built using the MIT App Inventor 2 development environment [AI2](https://appinventor.mit.edu)

The electronically literate can add hardware to switch the lamp on and off via the phone's WiFi.  See the manual for details.  

Even without WiFi switching hardware, the timer has been made useful when manually switching the enlarger's lamp by adding a count-in delay and providing a continuous test-strip mode with audio warnings before each subsequent strip exposure.



## Latest

### 14-Apr-2019: wip branch version 1.3.4.

Some small tweaks:

Changed Strips tab's left side config title to "SET MODE" (still don't like it, but will have to do for now).  
Changing Mode now updates the strip-time list - other selections already did this but adding the SINGLE mode means this button should do so too now.

-----

=======
09-Apr-2019: wip branch version 1.3.4.  

The app now scales well when used on a tablet.

Memories now show their contents.  Space was made for this by shoving the now largely obsolete f-stop calculation section on the Main tab to the right of the display and using the released space to show the values held in the Memories.

I have updated the manual to include the changes since 1.3.0 and the instructions now include the Sonoff Basic Wi-Fi switch.  I may make a reprogrammed version of this available on Tindie - TBA.

======
March-2019:  On the STRIPS tab I have added a "SINGLE" mode.  This mode may be used when you want to take your test strips from the same area of the negative each time.  This is useful when you have a very important area, or if the rest of the negative does not have the full range of tones necessary to get good test strips.  It is similar to the MANUAL mode, but each strip exposure is the full f-stop incemental exposure for that strip and not an incemental one based on the previous strip.  This update makes the MAIN tab's F-stop Mode section efectively obsolete, so that needs to go.  

=======
March-2019:  On the STRIPS tab I have added a "SINGLE" mode.  This mode may be used when you want to take your test strips from the same area of the negative each time.  This is useful when you have a very important area, or if the rest of the negative does not have the full range of tones necessary to get good test strips.  It is similar to the MANUAL mode, but each strip exposure is the full f-stop incemental exposure for that strip and not an incemental one based on the previous strip.  This update makes the MAIN tab's F-stop Mode section efectively obsolete, so that needs to go.  


## Getting Started

There are two branches:

	1) master : holds the currently released version of the app as available on the google play store.
	
	2) wip : holds the current work-in-progress development version.  This version may not be stable.



### Prerequisites

To edit the app you will need an App Inventor 2 login and import the AIA project file into your My Projects area.
