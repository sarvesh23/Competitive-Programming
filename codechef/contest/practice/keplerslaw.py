n=int(input())
while n!=0:
    a,b,c,d = map(int,input().split())
    t1= a**2 / c**3
    t2= b**2 / d**3
    if t1==t2:
        print("YES")
    else:
        print("NO")
    n-=1

