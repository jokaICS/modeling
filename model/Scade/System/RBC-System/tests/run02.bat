@echo off
if not exist out mkdir out
SCSSMLNC ..\Simulation\RBC_Model_Pkg__RBC.dll -scenario test02.sss -out out\test02.out
