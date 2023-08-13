n=int(input())
while n!=0:
    x,y = map(int,input().split())
    if x+y> 6:
        print("YES")
    else:
        print("NO")