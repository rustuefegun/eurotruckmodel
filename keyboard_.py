import keyboard
import serial, time

serport = serial.Serial("COM5", baudrate=9600, timeout=1)

while(True):
    if keyboard.is_pressed('w'):
        serport.write(b'w')
        time.sleep(0.01)
         
    if keyboard.is_pressed('a'):
        serport.write(b'a')
        time.sleep(0.01)
        
    if keyboard.is_pressed('s'):
        serport.write(b's')
        time.sleep(0.01)
        
    if keyboard.is_pressed('d'):
        serport.write(b'd')
        time.sleep(0.01)
        
    if keyboard.is_pressed('e'):
        serport.write(b'e')
        time.sleep(0.01)

    if keyboard.is_pressed('t'):
        serport.write(b'p')
        time.sleep(0.01)
    if keyboard.is_pressed('ü'):
        serport.write(b'm')
        time.sleep(0.01)
    if keyboard.is_pressed('ğ'):
        serport.write(b'n')
        time.sleep(0.01)

