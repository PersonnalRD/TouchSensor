# Description
This repository contains an empty project of `ESP32`. You can setup the environment issuing the command 
```c++
pio project init --board esp32doit-devkit-v1 --project-option "framework = arduino" --project-option "platform = espressif32" --project-option "monitor_speed = 115200"
```
using the `PIO` terminal. This command will ensure creating files and folders needed to handle the project. Use the command `pio run -t monitor > data.csv` to redirect the output to a file in order to keep trace of different values. This also helps to select an accurate `threshold`.