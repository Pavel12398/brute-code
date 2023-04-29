@echo off


mkdir .build
cd .build
cmake -G "Unix Makefiles" ..

mingw32-make