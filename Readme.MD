# TVState - USB Interface cable and utilities for determining the current TV state.
![TVState Hardware](https://raw.githubusercontent.com/Irdroid/TVState/main/Hardware/TVState_1.jpg)
### How it works?

TVState is a USB cable that connects to your TV, the other end of the cable connects to your PC or Raspberry Pi. IF your TV is powered, it will enable power to all its built in USB ports. TVState will report that voltage to the computer, connected to the other end of the TVState cable. The supporting utilities are written in C and bash, the output of the utilities can be used to feed to another system or software that will further process the TV status information. 

1. Connect one end of the TVState cable to your TV, the other end to a Computer or a Raspberry Pi
2. Use the supporting utilities to report TV current state
3. Perform any automation with the output from the TVState utility.

### Applications
- Digital Signage Systems
- HTPC Computers, equipped with infrared transmitters (Useful to issue IR command, based on the current TV status)
- Automation

### Usage 

1. Clone this repository
2. Make
3. ./tvstat ttyUSB[n] or tvstat.sh ttyUSB[n]

For doing automation, simply use the bash script to assign actions based on the current TV State, or alter tvstat.c to customize.

### Hardware

- [TVState USB Interface Cable from Irdroid.eu](https://irdroid.eu/product/tvstate-usb-cable-reading-current-tv-state/)
