# cac2323.github.io

# Interactive Devices


Components
Board: ESP32 TTGO T1(default settings, except changed upload speed to 115200)
USB-c cable(for flashing code)
5 jumper cables(3 for potentiometer, 2 for button)

Note: make sure to change header in User_Setup_Select based on preloaded support by going to your sketchbook location(shown in File>Preferences) -> Libraries folder -> TFT_eSPI folder -> User_Setup_Select.h
I had to comment out the default and uncomment setup file for ESP32 and TTGO T-display ST7789V SPI bus TFT 
  - the specific line: #include <User_Setup/Setup25_TTGO_T_Display.h>

Look at chapter 2 for buttons and chapter 11 for potentiometer tutorials in the provided pdf below. 
![C_tutorial](https://drive.google.com/file/d/1GLq7iRY_I1D5Fgma1Rd3yVhNt3dg7K0T/view)

![IMG_0925](https://github.com/cac2323/cac2323.github.io/blob/6df5b7f215b0406381c1c6170ba82ddd3546e99a/mod2/IMG_0925.JPG)

Project
Use the above mentioned tutorials to first test out the sensors initially. After everything is communicating as expected, flash the code given in freepalestine.ino, and the text "free palestine" should appear and with every button press, a flag should appear. 

![IMG_0979](https://github.com/cac2323/cac2323.github.io/blob/ebb2aa766baa1c83cda65dd260347f3098c0c17e/mod2/IMG_0979.jpg)


