# MCU name
MCU = atmega32u4

# Bootloader selection
#   Teensy       halfkay
#   Pro Micro    caterina
#   Atmel DFU    atmel-dfu
#   LUFA DFU     lufa-dfu
#   QMK DFU      qmk-dfu
#   ATmega32A    bootloadHID
#   ATmega328P   USBasp
BOOTLOADER = atmel-dfu

# Build Options
#   comment out to disable the options.
#
BOOTMAGIC_ENABLE = lite		# Virtual DIP switch configuration
MOUSEKEY_ENABLE = yes		# Mouse keys
EXTRAKEY_ENABLE = yes		# Audio control and System control
DEBOUNCE_TYPE = sym_eager_pk
DEBOUNCE = 50
ENCODER_ENABLE = no
# CONSOLE_ENABLE = yes		# Console for debug
# COMMAND_ENABLE = yes		# Commands for debug and configuration
KEYBOARD_LOCK_ENABLE = yes	# Allow locking of keyboard via magic key
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
# SLEEP_LED_ENABLE = yes	# Breathing sleep LED during USB suspend
NKRO_ENABLE = yes			# USB Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
# BACKLIGHT_ENABLE = yes	# Enable keyboard backlight functionality
# MIDI_ENABLE = YES			# MIDI controls
# UNICODE_ENABLE = YES		# Unicode
# BLUETOOTH_ENABLE = yes	# Enable Bluetooth with the Adafruit EZ-Key HID

LAYOUTS = 60_ansi 60_iso 60_ansi_split_bs_rshift 60_tsangan_hhkb
