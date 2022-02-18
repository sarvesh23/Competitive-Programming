a=1
b=2
while a!=b:
    a,b = input().split()
    a=int(a)
    b=int(b)
    if a<b:
        print("Crescente")
    elif a>b:
        print("Decrescente")
    else:
        break