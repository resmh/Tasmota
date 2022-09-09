# Flashing ESP32 4MB on ttyUSB0:
```
esptool.py -p /dev/ttyUSB0 --chip esp32 merge_bin -o tasmota32.factory.bin --flash_mode dio --flash_freq 40m --flash_size 4MB 0x1000 tasmota32.bootloader_dio_40m.bin 0x8000 tasmota32.partitions.bin 0xe000 tasmota32.boot_app0.bin 0x10000 tasmota32.safeboot.bin 0xe0000 tasmota32.firmware.bin
```

# Flashing ESP8266 4MB on ttyUSB0:
```
esptool.py -p /dev/ttyUSB0 write_flash -fs 4MB -fm dout 0x0 tasmota.bin
```

