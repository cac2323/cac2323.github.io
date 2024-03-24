/*
 * This ESP32 code is created by esp32io.com
 *
 * This ESP32 code is released in the public domain
 *
 * For more detail (instruction and wiring diagram), visit https://esp32io.com/tutorials/esp32-potentiometer
 */
#include <TFT_eSPI.h>
#define BUTTON_PIN 33 // GPIO21 pin connected to button
#define PIN_ANALOG_IN 4

TFT_eSPI tft = TFT_eSPI(); // Initialize TFT display
TFT_eSPI tft2 = TFT_eSPI(); // Initialize TFT display

// Variables will change:
int lastState = HIGH; // the previous state from the input pin
int currentState;     // the current reading from the input pin
unsigned long lastDebounceTime = 0;  // the last time the output pin was toggled
unsigned long debounceDelay = 35;    // the debounce time; increase if the output flickers

float floatMap(float x, float in_min, float in_max, float out_min, float out_max) {
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

// the setup routine runs once when you press reset:
void setup() {
  
  tft.init();
  tft.setRotation(1); // Landscape orientation
  tft2.init();
  tft2.setRotation(1); // Landscape orientation
  tft2.fillScreen(TFT_BLACK);

  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  
  pinMode(TFT_BL, OUTPUT);
  ledcSetup(0, 5000, 8); // 0-15, 5000, 8
  ledcAttachPin(TFT_BL, 0); // TFT_BL, 0 - 15
  int analogValue = analogRead(36);
  // Rescale to potentiometer's voltage (from 0V to 3.3V):
  float voltage = floatMap(analogValue, 0, 4095, 0, 255);
  ledcWrite(0, voltage); // 0-15, 0-255 (with 8 bit resolution); 0=totally dark;255=totally shiny
  
  // initialize the pushbutton pin as an pull-up input
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  tft2.drawString("FREE PALESTINE", 0, 0, 2);
}

// the loop routine runs over and over again forever:
void loop() {
  // drawfree(int(random(0, 240)), int(random(0, 150)));
  // read the state of the switch/button:
  currentState = digitalRead(BUTTON_PIN);
  if(lastState == LOW && currentState == HIGH){
    Serial.println("The button is pressed");
    drawfree(int(random(0, 240)), int(random(0, 150)));
  }
  // save the the last state
  lastState = currentState;

  // read the input on analog pin GPIO36:
  int analogValue = analogRead(36);
  // Rescale to potentiometer's voltage (from 0V to 3.3V):
  float voltage = floatMap(analogValue, 0, 4095, 0, 255);

  // print out the value you read:
  Serial.print("Analog: ");
  Serial.print(analogValue);
  Serial.print(", Voltage: ");
  Serial.println(voltage);
  ledcWrite(0, voltage); // 0-15, 0-255 (with 8 bit resolution); 0=totally dark;255=totally shiny
}

void drawfree(int x, int y){
    tft2.drawRect(x-5, y-5, 80, 40, TFT_WHITE);

    tft2.drawRect(x, y, 75, 10, TFT_BLACK);
    tft2.fillRect(x, y, 75, 10, TFT_BLACK);

    tft2.drawRect(x, y+20, 75, 10, TFT_GREEN);
    tft2.fillRect(x, y+20, 75, 10, TFT_GREEN);

    tft2.drawRect(x+15, y+10, 60, 10, TFT_WHITE);
    tft2.fillRect(x+15, y+10, 60, 10, TFT_WHITE);

    tft2.fillTriangle(x, y, x, y+30, x+30, y+15, TFT_RED);

}




