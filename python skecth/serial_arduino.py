import serial
import time

# 0 - 9 er tal
# 10 - 15 er bogstaver fra A til F
# 16 er en tænke animation
# for at write så ser.write(str(i).encode("utf-8"))

"""

    cifre = [int(c) for c in str(tmp)]  # splitter tallet i cifre
    for c in cifre:
        ser.write(str(c).encode("utf-8"))
        print(f"Sendt: {c}")
        time.sleep(tidMellemtal)
"""
ser = serial.Serial('/dev/ttyUSB0', 115200, timeout=1)
time.sleep(2)
tidMellemtal = 1.5
tmp = 25


cifre = [int(c) for c in str(tmp)]  # splitter tallet i cifre
for c in cifre:
    ser.write(str(c).encode("utf-8"))
    print(f"Sendt: {c}")
    time.sleep(tidMellemtal)

ser.write('20'.encode("utf-8"))
ser.close()