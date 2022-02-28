n=int(input())
while n!=0:
    x,y=input().split()
    x=int(x)
    y=int(y)
    r=9*x*x + y*y
    b=2*x*x + 25*y*y
    c=-100*x+y*y*y
    if r>b and r>c:
        print("Rafael ganhou")
    elif b>r and b>c:
        print("Beto ganhou")
    else:
        print("Carlos ganhou")
    n-=1