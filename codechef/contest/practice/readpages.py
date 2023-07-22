n=int(input())
for i in range(n):
    (n,x,y) = map(int,input().split())
    if x*y >=n:
        print("YES")
    else:
        print("NO")