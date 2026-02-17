import serial
import time

# 0 - 9 is numbers
# 10 - 15 is letters A - F
# 16 is a wating animation
# to write then -->ser.write(str(i).encode("utf-8"))

"""

    cifre = [int(c) for c in str(tmp)]  # splitter tallet i cifre
    for c in cifre:
        ser.write(str(c).encode("utf-8"))
        print(f"Sendt: {c}")
        time.sleep(tidMellemtal)
"""
ser = serial.Serial('/dev/ttyUSB0', 115200, timeout=1)
time.sleep(2)
time_in_between = 1.5
tmp = 25 # this is a test variable


cifre = [int(c) for c in str(tmp)]  # splitting the number up
for c in cifre:
    ser.write(str(c).encode("utf-8"))
    print(f"Sendt: {c}")
    time.sleep(time_in_between)

ser.write('20'.encode("utf-8"))
ser.close()