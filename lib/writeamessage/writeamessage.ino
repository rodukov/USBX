#include "Keyboard.h"

void tap(int keyname) {
  Keyboard.press(keyname);
  delay(50);
  Keyboard.release(keyname);
}

void setup() {
  delay(5000); /* Big delay to make USBX re-uploadable */
  Keyboard.begin();

  Keyboard.print("Hello, World!");
  
  Keyboard.end();
}

void loop() {}
