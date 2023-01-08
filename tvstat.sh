#!/bin/bash

# Execute TVState, assign its output as variable
# Identify your device dev entry and enter it as a
# command-line argument, do more processing see below

if [[ $# -eq 0 ]] ; then
    echo 'No port provided. Port in the form ttyUSB[n]'
    exit 1
fi

STAT=$1
tvstat="./tvstat"
        
TVON=$(${tvstat} ${STAT})

if [ "$TVON" == "1" ]; 

	then
		echo "TV is ON"
	else
		echo "TV is OFF"
fi
