x,y = input().split()
y=float(y)
x=float(x)

c=0.0
if x==1.0:
    c=y*4.0
elif x==2.0:
    c=y*4.5
elif x==3.0:
    c=y*5.0
elif x==4.0:
    c=y*2.0
elif x==5.0:
    c=1.5*y
else:
    c=0.0

print("Total: R$ {:.02f}".format(c)) 