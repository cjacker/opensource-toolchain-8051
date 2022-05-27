#!/usr/bin/env python

################################
#DS89C430/DS89C450 programmer  #
#by Vinod.S                    #
################################

import sys
import os
import time
import serial
import serial.tools.list_ports as ports
import argparse

if sys.platform == "win32":
    port = "COM3"
elif sys.platform == "darwin":
    port = "/dev/tty.usbserial"
else:
    port = "/dev/ttyUSB0"

parser = argparse.ArgumentParser(
    description=("DS89C430/450 programmer"))

parser.add_argument("image",
                    help="code image (ihx)",
                    type=argparse.FileType("rb"), nargs='?')

parser.add_argument("-p", "--port",
                        help="serial port device (default: %s)" % port,
                        default=port)

parser.add_argument("-b", "--baudrate",
                    help="baud rate (default: 57600)",
                    type=int,
                    default=57600)

opts=parser.parse_args()

if not sys.argv[1:]:
    parser.print_help()
    exit(1)

try: 
    with serial.Serial(port = opts.port, baudrate = opts.baud) as ser:
        ser.timeout = 0.3
        ser.setDTR(1)
        if ser.isOpen():
            try:
                ser.flushInput()
                ser.flushOutput()
                ser.write("\x0D")
                time.sleep(0.1)
                recbuffer = ser.read(80)
                list = recbuffer.split(" ")
                if 'LOADER' in recbuffer:
                    print("connected to bsl successfully.")
                    print(recbuffer)
                else:
                    print("connected to bsl failed.")
                    ser.setDTR(0)
                    ser.close()
                    sys.exit(1)
                ser.write("K\x0D")
                time.sleep(0.1)
                ser.write("L\x0D")
                f=open(opts.image,"rU")
                hexcontent = f.read()
                f.close()
                ser.write(hexcontent+"\x0D")
                k = ser.read(200)
                print(k)
                ser.setDTR(0)
                ser.close()
            except Exception as e1:
                ser.close()
                print("error communicating...: " + str(e1))
except Exception as e:
    print("error open serial port: " + str(e))
    exit()
