t = int(input())
for i in range(t):
    a = str(input())
    if a=='b' or a=='B':
        print("BattleShip")
    elif a=='c' or a=='C':
        print("Cruiser")
    elif a=='d' or a=='D':
        print("Destroyer")
    elif a=='f' or a=='F':
        print("Frigate")
    