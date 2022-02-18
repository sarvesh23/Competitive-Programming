t=0
a=0
g=0
d=0
while t!=4:
    t=int(input())
    if t==1:
        a+=1
    elif t==2:
        g+=1
    elif t==3:
        d+=1

print("MUITO OBRIGADO")
print("Alcool: {:.0f}".format(a))
print("Gasolina: {:.0f}".format(g))
print("Diesel: {:.0f}".format(d))