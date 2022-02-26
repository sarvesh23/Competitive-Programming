n=int(input())
while n!=0:
    a,b = input().split()
    a=str(a)
    b=int(b)
    if a=='Thor' and b>0:
        print('Y')
    else:
        print('N')
    n-=1