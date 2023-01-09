/* 
*  TVState Support utility
*  The utility will read status from
*  the usb device and report if the TV 
*  is either ON or OFF
*
*  1 - TV is On
*  0 - TV is Off
*
*  See the bash example for further processing
*  and assigning tasks, based on the TV status
*/

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <string.h>

int main( int argc, char *argv[])
{

    if (argc < 2) {
        printf("Usage ./tvstat ttyUSB[n] \n");
        return 1;
    }  

  char base[14] = "/dev/";
  int fd, serial;
  strcat(base,argv[1]);
  
  fd = open(base, O_RDONLY);
  ioctl(fd, TIOCMGET, &serial);
  
  // Signals are inverted in hardware
  // therefore we flip in software
  if (serial & TIOCM_CTS)
      puts("0"); 
  else
      puts("1");
  
  close(fd);
  return 0;
}
