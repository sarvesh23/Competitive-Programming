n=int(input())
while n!=0:
    m=int(input())
    A  = list(map(int,input().split()))
    D = list(map(int,input().split()))
    Total = []
    for i in A:
        Total.append(i)
    for i in D:
        Total.append(i)
        dict ={}
    for i in Total:
        if i not in dict:
            dict[i]=1
        else:
            dict[i]+=1
    large =0
    for i in dict:
        if dict[i]>large:
            large=dict[i]
    print(large)
    n-=1
