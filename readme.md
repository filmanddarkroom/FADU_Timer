# Film and Darkroom User (FADU) F-Stop Enlarger Timer

An Android based darkroom enlarger timer using f-stop timing techniques.


The app is built using the MIT App Inventor 2 development environment [AI2](https://appinventor.mit.edu)

The electronically literate can add hardware to switch the lamp on and off via the phone's WiFi.  See the manual for details.  

Even without WiFi switching hardware, the timer has been made useful when manually switching the enlarger's lamp by adding a count-in delay and providing a continuous test-strip mode with audio warnings before each subsequent strip exposure.



## Latest

### 03-Mar-2021:  Version 1.5.0 released

1.5.0 released to the google play store 2 days ago, but google is taking forever to approve.

In the meantime, the .APK .AIA and updated documentation are here in the master branch.

(1) Can now use a Sonoff BASIC R3 (or MINI) version in DIY mode.  Select  [BASIC R3].  This removes the need to reprogram the device's firmware but the lamp control signals go through your local router, introducing small random delays.  See the manual for details.

(2) Same as (1) but using DIY mode's 'Inching' API to avoid router-inflicted network delays.  Select [Pulse R3].  The Sonoff API requires all times be rounded to the nearest 0.5s but see the manual where this is shown to be not a major problem in practice.

(3)  Added the ability to use the camera's LED on the back of the phone or tablet.  Potentially useful for pre-flashing paper.

(4)  Added Individual volume controls for the various ticks and beeps.  These settings are stored when changed and reloaded at each startup. 

(5) Strip times now auto-updade when changing the base time or opening the STRIPS tab.

Thanks to Ariel Till <tillari@yahoo.com> who provided instructions on how to update the firmware using OTA.  His original instructions in Spanish are here: https://www.lasnuevemusas.com/timer-por-pasos-para-ampliadora-en-tu-telefono-movil/  An English language version is in the manual.



### 14-Apr-2019: Version 1.4.0 released.

1) Single strip mode [SINGLE] added for when you are using individual strips of paper instead of making multiple strips across a sheet of paper. Each strip-time is for the whole f-stop calculated exposure.

2) The Memories now display their contents.

3) Scales (mostly) correctly for tablets.

4) Main tab's F-stop Mode now reduced as all its functionality is now moved to the Strips tab.

Space was made for displaying the memory's contents by shoving the now largely obsolete f-stop calculation section on the Main tab to the right of the display.  I have left it because it is a quick way of getting incremental values for manual use without having to use the Strips mode tab.

I have updated the manual to include the changes since 1.3.0 and the instructions now include details for programming the Sonoff Basic Wi-Fi switch.  


Some small tweaks:

Changed the Strips tab left side config title to "SET MODE".  

Changing strip Mode to [SINGLE] now updates the strip-time list - other selections already did this but now this does so too.


======

March-2019:  On the STRIPS tab I have added a "SINGLE" mode.  This mode may be used when you want to take your test strips from the same area of the negative each time.  This is useful when you have a very important area, or if the rest of the negative does not have the full range of tones necessary to get good test strips.  It is similar to the MANUAL mode, but each strip exposure is the full f-stop exposure time for that strip and not an incemental one based on the previous strip.  This update makes the MAIN tab's F-stop Mode section efectively obsolete.

=======



## Getting Started


Because the App Inventor source code does not exist in a form that can be used with a repository, the whole .aia file is supplied.  To obtain a copy (along with the rest of the files) use the [Clone or download] button to download the zip file to your PC.


There are two branches:

	1) master : holds the currently released version of the app as available on the google play store.
	
	2) wip : holds the current work-in-progress development version.  This version may not be stable.


### Prerequisites

To edit the app you will need an App Inventor 2 login and import the AIA project file into your My Projects area.
