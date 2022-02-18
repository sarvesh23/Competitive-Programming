a,b=input().split()
a=int(a)
b=int(b)
while a!=0 or b!=0:
    if a>0 and b>0:
        print("primeiro")
    elif a>0 and b<0:
        print("quarto")
    elif a<0 and b<0:
        print("terceiro")
    elif a<0 and b>0:
        print("segundo")
    elif a==0 or b==0:
        print()
    a,b=input().split()
    a=int(a)
    b=int(b)