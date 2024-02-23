#include "Keyboard.h"

void tap(int keyname) {
  Keyboard.press(keyname);
  delay(50);
  Keyboard.release(keyname);
}

void setup() {
  delay(5000); /* Big delay to make USBX re-uploadable */
  Keyboard.begin();

  Keyboard.press(KEY_LEFT_GUI); Keyboard.press(114); Keyboard.releaseAll(); /* WIN + R */
  delay(350);
  tap(99); tap(109); tap(100); /* cmd */
  tap(KEY_RETURN);
  
  Keyboard.end();
}

void loop() {}
