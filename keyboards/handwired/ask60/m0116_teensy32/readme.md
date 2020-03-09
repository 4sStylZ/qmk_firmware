### General informations

The teensy 3.2 is a ARM MCU. To compile it on QMK, we use the ChibiOS toolchain.
The ChibiOS toolchain need some adjustements comparing to more common MCU like AVR.

### Specifics Teensy 3.2 files

* chconf.h
* halconf.h
* mcuconf.h

### Pin specificity

Pinout described on the Teensy 3.2 PCB aren't usable directly, we need to use the MCU definitions instead of what is printed on the PCB. Sourced from <https://www.pjrc.com/teensy/schematic32.gif>. The following table can be used to convert between the two.

|  PCB   | MCU | Notes                       |
|------- |-----|-----------------------------|
| 0      | B16 |                             |
| 1      | B17 |                             |
| 2      | D0  |                             |
| 3      | A12 |                             |
| 4      | A13 |                             |
| 5      | D7  |                             |
| 6      | D4  |                             |
| 7      | D2  |                             |
| 8      | D3  |                             |
| 9      | C3  |                             |
| 10     | C4  |                             |
| 11     | C6  |                             |
| 12     | C7  |                             |
| 13/LED | C5  |                             |
| 14/A0  | D1  |                             |
| 15/A1  | C0  |                             |
| 16/A2  | B0  |                             |
| 17/A3  | B1  |                             |
| 18/A4  | B3  |                             |
| 19/A5  | B2  |                             |
| 20/A6  | D5  |                             |
| 21/A7  | D6  |                             |
| 22/A8  | C1  |                             |
| 23/A9  | C2  |                             |
| 24/A10 |     | ADC0_DP0 in schematic *[1]* |
| 25/A11 |     | ADC0_DM0 in schematic *[1]* |
| 26/A12 |     | ADC0_DP3 in schematic *[1]* |

*[1]* - Currently not configured and may require extra work to implement.
