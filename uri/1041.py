a,b = input().split()
a=float(a)
b=float(b)
if a>0 and b>0:
    print("Q1")
elif a==0.0 and b==0.0:
    print("Origem")
elif a==0:
    print("Eixo Y")
elif b==0:
    print("Eixo X")
elif a<0 and b>0:
    print("Q2")
elif a<0 and b<0:
    print("Q3")
else:
    print("Q4")