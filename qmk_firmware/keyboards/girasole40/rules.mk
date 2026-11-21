POINTING_DEVICE_ENABLE = yes
I2C_DRIVER_REQUIRED = yes

# Set to no (or override it on the make command line) to use QMK's stock
# IQS5xx driver without the firmware-side three-finger tap recognizer.
GIRASOLE40_THREE_FINGER_TAP_ENABLE ?= yes

ifeq ($(strip $(GIRASOLE40_THREE_FINGER_TAP_ENABLE)), yes)
    POINTING_DEVICE_DRIVER = custom
    SRC += drivers/sensors/azoteq_iqs5xx.c
    SRC += girasole40_pointing.c
    OPT_DEFS += -DGIRASOLE40_THREE_FINGER_TAP_ENABLE=1

    # In custom-driver mode pointing_device.c no longer includes the IQS5xx
    # header that normally changes the QMK default from 1 ms to 11 ms.
    OPT_DEFS += -DPOINTING_DEVICE_TASK_THROTTLE_MS=11
else
    POINTING_DEVICE_DRIVER = azoteq_iqs5xx
endif

COMBO_ENABLE = yes

### Debugging
#CONSOLE_ENABLE = yes
