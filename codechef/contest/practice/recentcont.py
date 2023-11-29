n=int(input())
while n:
    n-=1
    t=int(input())
    data = map(str,input().split())
    count=0
    for i in data:
        if i=="LTIME108":
            count+=1
    print(t-count,count)