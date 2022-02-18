a,b=input().split()
a=int(a)
b=int(b)
t=1
while t<=b:
    for i in range(a):
        print(t,end=' ')
        t=t+1
    print(end='')
