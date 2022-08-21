
for 5A-75B:
mkdir logs
./Lcnc_vit74_b-FABIO.py --build --no-compile --eth-ip 192.168.1.50 --board 5a-75b --revision 8.0 2> logs/Litex_build.err 1> logs/Litex_build.log
cd build/colorlight_5a_75b/gateware/
sh ./build_Lcnc.sh 2>../../../logs/build.err 1> ../../../logs/build.log
openFPGALoader -c usb-blaster --unprotect-flash -r -f ./Lcnc.bit 

cd ../../../driver
sudo halcompile --install Lcnc_b.c 


for 5A-75E:
mkdir logs
./Lcnc_vit74_e-FABIO.py --build --no-compile --eth-ip 192.168.1.50 --board 5a-75e --revision 8.0 2> logs/Litex_build.err 1> logs/Litex_build.log
cd build/colorlight_5a_75e/gateware/
sh ./build_Lcnc.sh 2>../../../logs/build.err 1> ../../../logs/build.log
openFPGALoader -c usb-blaster --unprotect-flash -r -f ./Lcnc.bit 

cd ../../../driver
sudo halcompile --install Lcnc_e.c 

