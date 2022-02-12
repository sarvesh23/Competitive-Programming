t=2
avg=0
while t!=0:
    a=float(input())
    if a>=0.0 and a<=10.0:
        avg += a
        t=t-1
    else:
        print("nota invalida")

print("media = {:.02f}".format(avg/2.0))
