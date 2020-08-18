from serial import Serial
import pyxinput

ser = None
joy = None

def main():
    global ser
    global joy

    ser = Serial("COM6", 115200)

    joy = pyxinput.vController()
    print("id : ", joy.id)

    while True:
        line = ser.readline().decode().replace('\n', '')
        [X1, Y1, X2, Y2, B1, B2, B3, B4] = [int(x) for x in line.split(',')]

        joy.set_value('AxisLx', -((min(1024, max(424, int(X1))) - 424) / 600) * 2 - 1)
        joy.set_value('AxisLy', ((min(1024, max(424, int(Y1))) - 424) / 600) * 2 - 1)
        joy.set_value('AxisRx', -((min(1024, max(424, int(X2))) - 424) / 600) * 2 - 1)
        joy.set_value('AxisRy', ((min(1024, max(424, int(Y2))) - 424) / 600) * 2 - 1)
        joy.set_value('TriggerR', (1 - B1))

        joy.set_value('BtnA', 1 - B3)
        joy.set_value('BtnX', 1 - B4)
        joy.set_value('BtnShoulderR', 1 - B2)


if __name__ == "__main__":
    main()

