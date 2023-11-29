n=int(input())
while n:
    n-=1
    t=int(input())
    d=input()
    half=int(t/2)
    for i in range(half):
        if d[i]==d[i+half]:
            count=0
        else:
            count=1
            break
    if count==0:
        print("YES")
    else:
        print("NO")