# WemosD32pro_EPD_Typewriter
This is a rudimental typewriter using Wemos D32 pro, a Waveshare ePaper 2.9" and a USB host for the keyboard


## Hardware

- Wemos D32 pro (https://wiki.wemos.cc/products:d32:d32_pro)
- 296x128, 2.9inch E-Ink display module (https://www.waveshare.com/product/2.9inch-e-paper-module.htm)
- Keyboard USB Host (http://www.hobbytronics.co.uk/usb-host-keyboard)
- wires, headers and resistances
- microSD

The schematics of the connections are in the EPD_TYPEWRITER_Connections.pdf file
![epd_connections](https://user-images.githubusercontent.com/42472256/56958452-a0245b80-6b4a-11e9-8f99-2352ab41f729.png)

## Software
All the libraries and files included in TYPEWRITER_EPD folder and downloaded from the library manager.

Arduino IDE must be used to upload all these files.

**REMEMBER**

Add "esp32" in Board Manager of Arduino IDE or follow this https://github.com/espressif/arduino-esp32/blob/master/docs/arduino-ide/windows.md procedure to have the latest commits (this should fix some bugs).
Then select Lolin D32 pro from the boards list.

### EPD library Rights

All the EPD functions rights belong to ZinggJM (https://github.com/ZinggJM), a genius whose patience and knowledge has been of incredible help in bringing this project up to light.

The functions are an implementation of this library https://github.com/ZinggJM/GxEPD2 and of Adafruit GFX library https://github.com/adafruit/Adafruit-GFX-Library.

### WebServer Rights

All the WebServer functions rights belong to G6EJD (https://github.com/G6EJD), a genius to whom goes my gratitude for the huge help given to this project, follow him here https://www.youtube.com/user/G6EJD, it's worth it.

The functions are an implementation of this library https://github.com/tzapu/WiFiManager/tree/development and of the standard Webserver.h built-in library.

## Still a prototype
This is the actual aspect of the project.

![epd_typewriter_prototype](https://user-images.githubusercontent.com/42472256/50538304-a7703400-0b6d-11e9-8a45-0611bee080b8.jpg)

The keyboard will be an assembled mechanical one and the case will be 3d Printed.
To improve the project this could be an idea of the embedded keyboard, inventor 3d model of a custom GH60 keyboard:

![gh60_render2](https://user-images.githubusercontent.com/42472256/48973720-c0edff80-f046-11e8-9203-d59c9dd1190e.png)
