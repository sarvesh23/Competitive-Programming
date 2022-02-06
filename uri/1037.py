a=float(input())
if a<0 or a>100:
    print("Fora de intervalo")
elif(a>=0 and a<=25):
    print("Intervalo [0,25]")
elif(a>25.00001 and a<=50.0000000):
    print("Intervalo (25,50]")
elif(a>50.00001 and a<=75.0000000):
    print("Intervalo (50,75]")
else:
    print("Intervalo (75,100]")