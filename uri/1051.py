a=float(input())
if a>=0.00 and a<=2000.00:
    print("Isento")
elif a>2000.01 and  a<=3000.00:
    t=(a-2000.00)*8/100.00
    print("R$ {:.02f}".format(t))
elif a>3000.00 and a<=4500.00:
    t=80.00 +  (a-3000.00)*18/100.00
    print("R$ {:.02f}".format(t))
else:
    t=80 + 270 + 28*(a-4500.00)/100.00
    print("R$ {:.02f}".format(t))