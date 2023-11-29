n=int(input())
while n!=0:
    t=int(input())
    arr=list(map(int,input().split()))
    #print(arr)
    #print(len(arr))
    count=0
    for i in arr:
        if i>=1000:
            count+=1
    print(count)
    n-=1