#include <WiFi.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  Serial.begin(115200);

  // Initialize OLED
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("OLED not found");
    while (true);
  }

  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);

  // WiFi setup
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  delay(100);

  display.setCursor(0, 0);
  display.println("WiFi Scanner");
  display.display();
  delay(2000);
}

void loop() {
  display.clearDisplay();
  display.setCursor(0, 0);
  display.println("Scanning...");

  int n = WiFi.scanNetworks();

  if (n == 0) {
    display.println("No networks found");
  } else {
    for (int i = 0; i < n && i < 4; i++) {
      display.setCursor(0, i * 15 + 10);

      display.print(i + 1);
      display.print(": ");
      display.print(WiFi.SSID(i));
      display.print(" ");
      display.print(WiFi.RSSI(i));
      display.println("dBm");
    }
  }

  display.display();
  delay(5000);
}
