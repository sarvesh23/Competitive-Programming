n=int(input())
while n!=0:
    n-=1
    x,y=input().split()
    x=float(x)
    y=float(y)
    if y==0:
        print("divisao impossivel",end='\n')
    else:
        print("{:.1f}".format(x/y),end='\n')