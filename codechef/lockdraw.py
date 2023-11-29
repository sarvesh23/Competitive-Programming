n=int(input())
while n!=0:
    n-=1
    a,b,c=map(int,input().split())
    if a+b==c or c+b==a or a+c==b:
        print("YES")
    else:
        print("NO")