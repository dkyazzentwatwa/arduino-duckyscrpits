REM Opens Terminal, Safari, Xcode, Calendar, Messages, Pycharm CE 
REM You can update the (" ") with whatever applications you'd like!
REM Delays may need adjusting depending on how long app takes to load.

REM Title: All Applications at once 
REM Author: Narsty
REM Target: MacOS 
REM Version: 1.0
REM Category: GOODUSB


ID 05ac:021e Apple:Keyboard
DELAY 2000
GUI SPACE
DELAY 500
STRING terminal
DELAY 500
ENTER
DELAY 1000
STRING open -a "Safari"
ENTER
DELAY 1000
STRING open -a "Xcode"
ENTER
DELAY 5000
STRING open -a "Calendar"
ENTER
DELAY 1000
STRING open -a "Messages"
ENTER
DELAY 2000
STRING open -a "Pycharm CE"
ENTER
DELAY 2000