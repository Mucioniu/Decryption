@echo off

pushd scripts

call F:\Xilinx\14.7\ISE_DS\settings64.bat
call clean.bat noref
call build.bat nodup
call run.bat nobuild nogui

popd

pause
