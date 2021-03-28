#include <Keyboard.h>

#define upThreshold 700
#define rightThreshold 700
#define downThreshold 700
#define leftThreshold 700

#define upPin A2
#define rightPin A3
#define downPin A0
#define leftPin A1

int upReading;
int rightReading;
int downReading;
int leftReading;

void setup() {
  Serial.begin(9600);
}

void loop() {
  upReading = analogRead(upPin);
  rightReading = analogRead(rightPin);
  downReading = analogRead(downPin);
  leftReading = analogRead(leftPin);

  Serial.print("up reading = ");
  Serial.println(upReading);
  Serial.print("right reading = ");
  Serial.println(rightReading);
  Serial.print("down reading = ");
  Serial.println(downReading);
  Serial.print("left reading = ");
  Serial.println(leftReading);
  
  if (upReading > upThreshold) {
    Keyboard.press(KEY_UP_ARROW);
  } else {
    Keyboard.release(KEY_UP_ARROW);
  }
  
  if (rightReading > rightThreshold) {
    Keyboard.press(KEY_RIGHT_ARROW);
  } else {
    Keyboard.release(KEY_RIGHT_ARROW);
  }
  
  if (downReading > downThreshold) {
    Keyboard.press(KEY_DOWN_ARROW);
  } else {
    Keyboard.release(KEY_DOWN_ARROW);
  }
  
  if (leftReading > leftThreshold) {
    Keyboard.press(KEY_LEFT_ARROW);
  } else {
    Keyboard.release(KEY_LEFT_ARROW);
  }
}
