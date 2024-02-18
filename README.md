# cac2323.github.io

# ESP32 Art installation

Display an animation on the screen of the ESP30 using Arduino IDE

Components
Board: ESP32 TTGO T1(default settings, except changed upload speed to 115200)
USB-c cable(for flashing code)
1x battery
1x popsicle stick
1x envelope

Note: make sure to change header in User_Setup_Select based on preloaded support by going to your sketchbook location(shown in File>Preferences) -> Libraries folder -> TFT_eSPI folder -> User_Setup_Select.h
I had to comment out the default and uncomment setup file for ESP32 and TTGO T-display ST7789V SPI bus TFT 
  - the specific line: #include <User_Setup/Setup25_TTGO_T_Display.h>

To test your ESP30 is working:
  1. in Arduino IDE, go to settings and add the following link to "Additional boards manager URLs"
      - https://dl.espressif.com/dl/package_esp32_index.json
  2. select board and corresponding port:
      - Tools > esp30 > TTGO T1
  3. Add esp30 library
      - Tools > Manage Libraries > search for TFT_eSPI by Bodmer > Install
  4. Load an example
      - File > Example > Tft_eSPI > 160x128 > select an example
      - Press the upload button
      - screen should turn on and display your example
  5. Try your own code! 


![IMG_0063 2](https://github.com/cac2323/cac2323.github.io/assets/117857284/dd2f7907-0949-4c50-b476-8f00639cff36)

Project
With the working code flashed onto the esp30 and with the battery connected, I put the esp30 in the envelope with the screen aligned with the cut out portion and used tape to secure it in place. (See pictures for front and back of envelope). In order to hang the envelope, we first had popsicle sticks with a hole in the middle, in order to loop thread around, and tie to holes punched in the envelope. For physically hanging up the contraption(stick, thread and envelope), we used an air vent and wedged the popsicle stick in order to have the thread and envelope securely hanging down. 

![IMG_0425](https://github.com/cac2323/cac2323.github.io/assets/117857284/0c35f401-5d0e-4caa-b576-f6e13be91492)
![IMG_0426](https://github.com/cac2323/cac2323.github.io/assets/117857284/6478f028-c165-410b-b931-57c9cb4a747b)

