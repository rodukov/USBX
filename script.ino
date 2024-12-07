#include "Keyboard.h"

void setup() {
    Keyboard.begin();
    /* "DEMO"(USBX) */
    Keyboard.print("notepad");
    Keyboard.print("Hello from XSCRIPT");

    Keyboard.end();
}

void loop() {}

