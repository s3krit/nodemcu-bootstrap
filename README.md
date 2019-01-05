This is a repo for bootstrapping development on the NodeMCU ESP8266 SOC. Using
it, you can build and flash projects for the device without any complex
dependencies or requirements.

The default project will connect to the wifi network specified in `src/main.ino`
line 12, listen for UDP packets on port 1337 and reply with the same message.

# Building
 - run `./prepare.sh` to set up submodules and toolchain (only needed once)
 - run `make upload` to build the project and flash the esp8826

# Adding libraries
 1. Add your desired library to lib/
 2. Add the following to src/Makefile, where LibName is the name of your library:
    - `ARDUINO_LIBS += LibName`
 3. Include the library in your source file: `#include <LibName.h>`

Library directories should have the `LibName.h` file at the top level of their
directory, and ideally the directory and header file should have the same name.

# Acknowledgements

This project wouldn't be possible without the work done by
[benpicco](https://github.com/benpicco/)'s
[blinkendisplay](https://github.com/benpicco/blinkendisplay) project, which
allowed me to turn my cardboard and LED monstrosity into something really cool
for the 35th Chaos Communication Congress.
