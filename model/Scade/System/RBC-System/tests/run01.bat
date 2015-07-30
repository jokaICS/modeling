@echo off
if not exist out mkdir out
SCSSMLNC ..\Simulation\RBC_Model_Pkg__RBC.dll -scenario test01.sss -out out\test01.out
