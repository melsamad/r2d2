#include "MPU9250.h"
#include <Wire.h>

// motor 1
int STEP_PIN = 13;
int DIR_PIN = 27;
// motor 2
int DIR2_PIN = 16;
int STEP2_PIN = 14;

// MPU 9250 i2C Pins 
int SDA_PIN = 33;
int SCL_PIN = 36;

// for the audio amplifier 
int INPUT_PIN = 10;

MPU9250 IMU(Wire, 0x68);
int status;

void setup() {

  pinMode(STEP1_PIN, OUTPUT);
  pinMode(DIR1_PIN, OUTPUT);
  pinMode(STEP2_PIN, OUTPUT);
  pinMode(DIR2_PIN, OUTPUT);

  Wire.begin(SDA_PIN, SCL_PIN);

  Serial.begin(6000);
  Serial.println("R2D2 booting up...");
  Serial.println("...May the force be with you");

  while (!Serial) {}

  status = IMU.begin();
  if (status < 0) {
    Serial.println("IMU didn't initialize");
    Serial.println(status);
  }

  while (1) {}

}

void loop() {

  IMU.readSensor();
  
}
