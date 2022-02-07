a,b=input().split()
a=abs(int(a))
b=abs(int(b))
c=0
if b>a:
    c=b-a
elif a>b:
    c=b+24-a
else:
    c=24

print("O JOGO DUROU {:.0f} HORA(S)".format(c))