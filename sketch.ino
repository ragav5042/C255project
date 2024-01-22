#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

//#define SSD1306_128_64
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

#define OLED_RESET 4 // Reset pin # (or -1 if sharing Arduino reset pin)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

int mouth_radius=5;
int change=1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { 
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }

  delay(2000);
  // display.clearDisplay();

  // display.setTextSize(2);
  // display.setTextColor(WHITE);
  // display.setCursor(10, 20);
  // display.println("WHTEHATJR");
  // display.display(); 
  
}

void loop() {
  // put your main code here, to run repeatedly:
   // this speeds up the simulation
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(10, 20);
  display.println("WOW");
  display.display(); 
  delay(1000);
  display.clearDisplay();
  display.drawCircle(50,30,30,WHITE);
  display.display();
  display.drawCircle(30,20,5,WHITE);
  display.display();
  display.drawCircle(60,20,5,WHITE);
  display.display();
  display.drawCircle(45,50,5,WHITE);
  display.display();

}