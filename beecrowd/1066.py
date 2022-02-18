e=0
o=0
p=0
n=0
for i in range(5):
    a=int(input())
    if a%2==0:
        e+=1
    else:
        o+=1
    if a>0:
        p+=1
    elif a<0:
        n+=1
print("{:.0f} valor(es) par(es)".format(e))
print("{:.0f} valor(es) impar(es)".format(o))
print("{:.0f} valor(es) positivo(s)".format(p))
print("{:.0f} valor(es) negativo(s)".format(n))