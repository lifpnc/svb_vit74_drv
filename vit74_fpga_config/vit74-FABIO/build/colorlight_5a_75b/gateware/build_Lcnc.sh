# Autogenerated by LiteX / git: 01754a82
set -e
yosys -l Lcnc.rpt Lcnc.ys
nextpnr-ecp5 --json Lcnc.json --lpf Lcnc.lpf --textcfg Lcnc.config  --25k --package CABGA256 --speed 6 --timing-allow-fail --seed 1 
ecppack  --bootaddr 0     Lcnc.config --svf Lcnc.svf --bit Lcnc.bit 