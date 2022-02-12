a=int(input())
b=int(input())
if a<b:
    for i in range(a+1,b):
        if i%5==2 or i%5==3:
            print(i)
else:
    for i in range(b+1,a):
        if i%5==2 or i%5==3:
            print(i)

