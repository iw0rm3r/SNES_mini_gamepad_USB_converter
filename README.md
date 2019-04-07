# SNES_mini_gamepad_USB_converter
**Extremely simple Arduino Uno converter of Nintendo’s SNES mini controllers to USB**

![SNES_mini_gamepad_USB_converter](https://raw.githubusercontent.com/iw0rm3r/SNES_mini_gamepad_USB_converter/master/photo.jpeg)
[Demonstration video](https://youtu.be/YtEJyOs7NZE)

A very simple sketch that allows you to use your **SNES mini’s gamepads** with your PC via USB. It’s based on 2 existing libraries:
1.	**[NintendoExtensionCtrl](https://github.com/dmadison/NintendoExtensionCtrl)** – for using Nunchuck-like Nintendo’s devices with Arduino via I2C interface;
2.	**[UnoJoy](https://code.google.com/archive/p/unojoy/)** – an Arduino library, a custom firmware for UART-to-USB chip on your Arduino Uno board (ATmega8u2), and PC drivers that allows you to use your Uno as a gamepad.
My sketch just “wires” these 2 libraries up.

**How to use it?**
1.	Download project sources using `git clone https://github.com/iw0rm3r/SNES_mini_gamepad_USB_converter.git`, or just by pressing the button *«Clone or download»* > *«Download ZIP»*;
2.	Connect your SNES mini gamepad to an Arduino Uno. It would be perfect to use a handy connector like **WiiChuck**, but you can just use jumper wires (like I did) but be careful not to bend them;
![Wiring a connector to the Arduino](https://cdn.instructables.com/ORIG/F0N/RJQ3/IH90O28H/F0NRJQ3IH90O28H.jpg)
3.	Download and install **NintendoExtensionCtrl** library using a build-in Arduino IDE library manager;
4.	Compile and upload my sketch to the main Arduino controller using standard Arduino IDE routine or other appropriate software;
5.	Use **UnoJoy** [instruction video](https://youtu.be/GrO8ZmxbOyI?t=170) to flash UART-to-USB chip on your Arduino Uno board to the custom firmware so it will work as a gamepad controller.
