
with open("script.usbx", "r") as countline:
    length = len(countline.readlines())
    countline.close()

script = open("script.usbx", "r")
TAB = "    "

INTERPRETERED = """"""

step = 0
while(step < length):
    line = script.readline().replace('\n', '').split(" ", 1)

    if len(line) > 1:
        command = line[0]
        
        argument = line[1]

        if command == "TITLE":
            res = f"/* {argument}(USBX) */\n"
            INTERPRETERED += res
        elif command == "TYPE":
            res = f'{TAB}Keyboard.print({argument});\n'
            INTERPRETERED += res 
    

    step += 1

RESULT = """#include "Keyboard.h"

void setup() {
    Keyboard.begin();
    """+INTERPRETERED+"""
    Keyboard.end();
}

void loop() {}

"""
with open("script.ino", "w") as ino:
    ino.write(RESULT)
    ino.close()
script.close()
