h1,m1,h2,m2 = input().split()
h1=int(h1)
h2=int(h2)
m1=int(m1)
m2=int(m2)
if h1==h2:
    h = 0
    if m1==m2:
        m=0
        h=24
    elif m2>m1:
        m=m2-m1
    else:
        m=60-m1+m2
        h=24
        h-=1
elif h2>h1:
    h=h2-h1
    
    if m1==m2:
        m=0
    elif m2>m1:
        m=m2-m1
    else:
        m=60-m1+m2
        h-=1
else:
    h=h2+24-h1
    
    if m1==m2:
        m=0
    elif m2>m1:
        m=m2-m1
    else:
        m=60-m1+m2
        h-=1
print("O JOGO DUROU {:.0f} HORA(S) E {:.0f} MINUTO(S)".format(h,m))