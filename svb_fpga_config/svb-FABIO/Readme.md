Lcnc is an fpga firmware that will enable colorlight 
boards such as 5A-75B or 5A-75E to become a linuxcnc peripheral board.
The communication with the host pc is trough gigabit ethernet.
The protocol used is etherbone.
The firmware is written in migen, using Litex framework.

Lcnc is my own interpretation of colorcnc form 
Roman Pechenko <romanetz4@gmail.com> "romanetz"
https://forum.linuxcnc.org/27-driver-boards/44422-colorcnc

Getting started:
- colorlight 5a 75b or 75e board
- jtag adapter for loading and flashing bitfiles
- boards hw info and pin maps are available here https://github.com/q3k/chubby75
- Litex installed and working, see https://github.com/enjoy-digital/litex
- clone Lcnc repo on your pc
- optionally edit Lcnc.py:
  modify what is between
  "Devices configuration start"
  and
  "Devices configuration end"
  This part of the firmware script file contains the list of the peripherals you want to include in the build, 
  and the board pins assigned to each. 
  The default driver contains a basic example with several inputs, outputs, pwm generators
  encoders, step generators.
- execute Lcnc.py:
  the command used to execute the firmware generation will accept arguments that will define
  the particular board to be used as target, and the ip address to assign to the board.
  the script can be run with default parameters, simply typing "./Lcnc.py --build --doc"
  this will generate a firmware for a colorlight 5A-75E V6.0 with ip=192.168.2.50
- the target board can be changed adding to the command "board" and "revision" parameters, 
  for example "--board=5a-75b --revision=8.0"
- ip address can be configured with "eth-ip" parameter, for example "--eth-ip=192.168.1.100"
- the script, if succesful, will generate many files, 3 of these are needed:
  - bitfile, you will find it in /build/colorlight_5a_75e/gateware/Lcnc.bit
    you will load this file on the board's fpga, I'm using openFPGAloader utility, with a ftdi jtag adapter
  - etherbone registers definition under /build/colorlight_5a_75e/software/include/generated/csr.h
    this file will be needed by the linuxcnc driver, copy this file in the folder driver/include/
  - autogenerated driver header configuration_auto.h, copy also this file in the folder driver/include/
- now copy the driver folder on the machine that runs Linuxcnc, in my case it is different than the machine with litex, since I'm using a raspberry
- build the driver with the command "sudo halcompile --install Lcnc.c"
- connect the board, ping it to make sure that the the board is alive and connected "ping 192.168.2.50"

I have attached a very basic HAL configuration for initial testing,the basic checks can be executed trough halshow interface. 

Basic functionality check:
- in the first terminal start the HAL configuration: "halrun -I -V  HAL.hal"
- open a second terminal and start halshow GUI "halshow"
- in halshow GUI watch tab choose the following interfaces:
  - Lcnc.00.update.time: this will show the update time for the component, in my system is around 200000ns
  - Lcnc.00.watchdog-write: this is the board watchdog time, in seconds, I have it set to 0.01s (10ms) as default
  - Lcnc.00.watchdog-read: this is the watchdog remaining time when petted, in seconds, check the value to be sure that is far from zero, and near to Lcnc.00.watchdog-write value

The above values should be updated continuosly if the board and driver are working correctly.

Enabling the board:
- in halshow GUI add the following:
  - Lcnc.00.enable
  - Lcnc.00.enabled
  - Lcnc.00.enable-request

- Set Lcnc.00.enable to True, this is the global enable flag for board, if set to true, the board can become ready to be enabled. 
The effective enabling will be requested by Lcnc.00.enable-request.
- Lcnc.00.enabled is the feedback confirmation that the board is enabled, as soon as Lcnc.00.enable will be set to false, the board will be disabled. The board can be disabed also if the onboard watchdog bites (to test this try to set Lcnc.00.watchdog-write to lower values until the board spontaneously disables). The board will disable also if it's hardware reset pin will be set to high (see "_ext_reset_in" in Lcnc.py for it's mapping).
- Set Lcnc.00.enable-request to True, then to False. This interface is checked only on it's rising edge from False to True, then it is ignored, if there are no watchdog problems or hw reset request, the board will enable and set back Lcnc.00.enabled to True.

Working with peripherals:
-- doc to be created, the peripherals are what they seem, you can play with them, only to be noted that stepgen is velocity mode only, and acceleration limit is not implemented yet.

Enjoy

Fabio Eboli