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
With the working code flashed onto the esp30 and with the battery connected, I put the esp30 in the envelope with the screen aligned with the cut out portion and used tape to secure it in place. (See pictures for front and back of envelope). In order to hang the envelope, we first had popsicle sticks with a hole in the middle, in order to loop thread around, and tie to holes punched in the envelope. For physically hanging up the contraption(stick, thread and envelope), we used an air vent and wedged the popsicle stick in order to have the thread and envelope securely hanging down. 

![IMG_0425](https://github.com/cac2323/cac2323.github.io/assets/117857284/0c35f401-5d0e-4caa-b576-f6e13be91492)
![IMG_0426](https://github.com/cac2323/cac2323.github.io/assets/117857284/6478f028-c165-410b-b931-57c9cb4a747b)


