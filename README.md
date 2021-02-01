# Schedule and control devices connected to Wemos D1 mini or Nodemcu through blynk app
Schedule and control devices with Wemos D1 and Blynk app

Adding Board to Arduino IDE
-----------------------------------------
To write & upload code for wemos you have to add the wemos board to your Arduino Ide.

In Arduino Ide.Go to File --> preferences add below URL to the Addition Boards Manager URL
http://arduino.esp8266.com/stable/package_esp8266com_index.json

Goto Tools/Board Manager

In board manager search for esp.

Install esp8266.

Blynk Library
-----------------------------------------
Download Blynk library.  https://github.com/blynkkk/blynk-library/releases/

Unzip this zip file and copy all the folders present in libraries folder and paste it to arduino ide/ libraries.

Set Up the Blynk App
-----------------------------------------
Create a New Project in BLYNK app.

Write Project Name and Select Wemos D1 mini or NodeMCU from dropdown and WiFi as connection type.

An AUTH token will be sent to your registered email, note this down.

Tap on the screen and add the Eventor widget to the screen.

Tap on the Eventor widget and click Add New Event.Select Time button and choose DAYS OF THE WEEK and START AT time and TIME ZONE.

SET THE TIME, then tap OK.

Now, select turn ON pin and add D5 pin as we have connected our relay to PIN D5.

Tap OK to finalize your Start Event.Same way create a new event and select START time that will Switch OFF the relay at PIN D5.

Code
-----------------------------------------
Download the code.ino file or copy the code in it.  https://github.com/methsaramperera/wemos-blynk-schedule/blob/main/code.ino

Make sure to change the AUTH_KEY, SSID and PASSWORD before uploading the code.
