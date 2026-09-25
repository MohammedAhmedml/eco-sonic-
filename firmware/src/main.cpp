#include <Arduino.h>

// Eco-Sonic ESP32 Monitoring Starter
// This is a bench-test template.
// Verify every sensor's voltage/output range before connection.

const int WATER_LEVEL_PIN = 34;
const int VOLTAGE_SENSOR_PIN = 35;
const int STATUS_LED_PIN = 2;

const unsigned long READ_INTERVAL_MS = 2000;
unsigned long lastReadTime = 0;

void setup() {
  Serial.begin(115200);
  pinMode(STATUS_LED_PIN, OUTPUT);
  digitalWrite(STATUS_LED_PIN, LOW);

  // ESP32 ADC configuration
  analogReadResolution(12);

  Serial.println("Eco-Sonic ESP32 Monitoring System");
  Serial.println("Starter firmware initialized.");
}

void loop() {
  const unsigned long now = millis();

  if (now - lastReadTime >= READ_INTERVAL_MS) {
    lastReadTime = now;

    int waterLevelRaw = analogRead(WATER_LEVEL_PIN);
    int voltageRaw = analogRead(VOLTAGE_SENSOR_PIN);

    float adcVoltage = (voltageRaw / 4095.0f) * 3.3f;

    Serial.println("----------------------------");
    Serial.print("Water level raw: ");
    Serial.println(waterLevelRaw);

    Serial.print("ADC voltage: ");
    Serial.print(adcVoltage, 3);
    Serial.println(" V");

    Serial.println("Status: Monitoring");

    digitalWrite(STATUS_LED_PIN, !digitalRead(STATUS_LED_PIN));
  }
}
