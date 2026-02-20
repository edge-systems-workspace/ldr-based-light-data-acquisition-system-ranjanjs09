/**
* @file main.cpp
 * @brief Embedded Light Intensity Monitoring using LDR
 * @author Purendra Ranjan [ranjanjs09]
 * @date 19-02-2026
 *
 * @details
 * Reads analog brightness data from LDR sensor
 * and displays structured output via Serial Monitor.
 */

#include <Arduino.h>
#define LDR_PIN A0

void setup() {
    // write your initialization code here
    Serial.begin(9600);
    while (!Serial); // Important for Uno R4 WiFi
}

void loop() {
    // write your code here
    int ldrRaw = analogRead(LDR_PIN);
    // Map to percentage
    int ligthtPercentage = map(ldrRaw, 0, 1023, 0, 100);
    Serial.print("LDR Raw: ");
    Serial.print(ldrRaw);
    Serial.print(" | Light: ");
    Serial.print(ligthtPercentage);
    Serial.println("%");
    delay(500);
}