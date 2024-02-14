#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI(); // Initialize TFT library
TFT_eSprite stext2 = TFT_eSprite(&tft); // Sprite object stext1
int tcount = 0;


void setup() {
  tft.init();
  tft.setRotation(1); // Landscape orientation

  pinMode(TFT_BL, OUTPUT);
  ledcSetup(0, 5000, 8); // 0-15, 5000, 8
  ledcAttachPin(TFT_BL, 0); // TFT_BL, 0 - 15
  ledcWrite(0, 100); // 0-15, 0-255 (with 8 bit resolution); 0=totally dark;255=totally shiny

  tft.fillScreen(TFT_BLACK); // Fill screen with black color
  // Create a sprite for Hello World
  stext2.setColorDepth(8);
  stext2.createSprite(240, 16);
  stext2.fillSprite(TFT_DARKGREY);
  stext2.setScrollRect(0, 0, 240, 16, TFT_DARKGREY); // Scroll the "Hello" in the first 40 pixels
  stext2.setTextColor(TFT_WHITE); // White text, no background
}

void loop() {
  // drawHeartOutline(50, 50, 50, TFT_RED); // Draw heart outline at (50, 50)
  // drawHeart(80, 80, 100, TFT_GREEN);
  tft.drawString("HAPPY VALENTINES", 0, 0, 2);
  stext2.pushSprite(0, 70);
  stext2.scroll(5);
  tcount--;
  if (tcount <=0)
  { // If we have scrolled 40 pixels the redraw text
    tcount = 40;
    stext2.drawString("HAPPY VALENTINES", 0, 0, 2); // draw at 6,0 in sprite, font 2
  }
  drawHeart(int(random(0, 240)), int(random(0, 130)), int(random(1, 100)), TFT_PINK);
  drawHeart(int(random(0, 240)), int(random(0, 130)), int(random(1, 100)), TFT_RED);
  drawHeart(int(random(0, 240)), int(random(0, 130)), int(random(1, 100)), TFT_PINK);
  drawHeart(int(random(0, 240)), int(random(0, 130)), int(random(1, 100)), TFT_RED);

  drawHeart(int(random(0, 240)), int(random(0, 130)), int(random(5, 30)), TFT_RED);
  drawHeart(int(random(0, 240)), int(random(0, 130)), int(random(5, 30)), TFT_RED);
  drawHeart(int(random(0, 240)), int(random(0, 130)), int(random(5, 30)), TFT_RED);
  drawHeart(int(random(0, 240)), int(random(0, 130)), int(random(5, 30)), TFT_RED);

  drawHeart(int(random(0, 240)), int(random(0, 130)), int(random(5, 30)), TFT_PINK);
  drawHeart(int(random(0, 240)), int(random(0, 130)), int(random(5, 30)), TFT_PINK);
  drawHeart(int(random(0, 240)), int(random(0, 130)), int(random(5, 30)), TFT_PINK);
  drawHeart(int(random(0, 240)), int(random(0, 130)), int(random(5, 30)), TFT_PINK);

  delay(1000); // Wait for 1 second
  tft.fillScreen(TFT_BLACK); // Clear the screen
  delay(500); // Wait for 0.5 second
}

void drawHeart(int x, int y, int size, uint32_t color){
  tft.drawLine(x, y, x+size/4, y-size/4, color);
  tft.drawLine(x+size/4, y-size/4, x+size/2, y, color);

  tft.drawLine(x+size/2, y, x+(3*size/4), y-size/4, color);
  tft.drawLine(x+(3*size/4), y-size/4, x+size, y, color);

  tft.drawLine(x, y, x+size/2, y+size, color);
  tft.drawLine(x+size, y, x+size/2, y+size, color);



}

