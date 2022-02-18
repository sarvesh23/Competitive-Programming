a,b,c = input().split()
a=float(a)
b=float(b)
c=float(c)
l = []
l.append(a)
l.append(b)
l.append(c)
l.sort()
a=l[2]
b=l[0]
c=l[1]
if a>=(b+c):
    print("NAO FORMA TRIANGULO")
else:
    if (a*a) == (b*b+c*c):
        print("TRIANGULO RETANGULO")
    elif (a*a) > (b*b + c*c):
        print("TRIANGULO OBTUSANGULO")
    elif (a*a) < (b*b + c*c):
        print("TRIANGULO ACUTANGULO")
    if a==b and b==c and a==c:
        print("TRIANGULO EQUILATERO")
    elif a==b or a==c or b==c:
        print("TRIANGULO ISOSCELES")