cmd_/home/agv/i2c-ch341-usb/modules.order := {   echo /home/agv/i2c-ch341-usb/i2c-ch341-usb.ko; :; } | awk '!x[$$0]++' - > /home/agv/i2c-ch341-usb/modules.order
