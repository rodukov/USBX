#include "Keyboard.h"

void tap(int keyname) {
  Keyboard.press(keyname);
  delay(50);
  Keyboard.release(keyname);
}

void setup() {
  delay(5000);
  Keyboard.begin();
  // Keyboard.print("Hello, World!");

  tap(104);
  Keyboard.end();
}

void loop() {}
