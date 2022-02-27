a,b,c = input().split()
a=int(a)
b=int(b)
c=int(c)
if b>a and b<c:
    print("zezinho")
elif b<a and b>c:
    print("zezinho")
elif c<a and c>b:
    print("luisinho")
elif c>a and c<b:
    print("luisinho")
else:
    print("huguinho")