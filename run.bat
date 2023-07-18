@echo off
rmdir /s /q build
mkdir build
cd  build
cmake ..
cmake --build .
start bin\Debug\game.exe





