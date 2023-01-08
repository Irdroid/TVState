# TVState - USB Interface cable and utilities for determining the current TV status.

### How it works?

TVState is a USB cable that connects to your TV, the other end of the cable connects to your PC or Raspberry Pi. IF your TV is powered, it will enable power to all its built in USB ports. isMyTVon will report that voltage to the computer, connected to the other end of the isMyTVon cable. The supporting utilities are written in C and bash, the output of the utilities can be used to feed to another system or software that will further process the TV status information. 

1. Connect one end of the isMyTVon cable to your TV, the other end to a Computer or a Raspberry Pi
2. Use the supporting utilities to report TV current status

### Applications
- Digital Signage Systems
- HTPC Computers, equipped with infrared transmitters (Useful to issue IR command, based on the current TV status)
- Automation


