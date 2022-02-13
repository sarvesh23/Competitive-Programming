t=1
while t!=0:
    t=int(input())
    if t==0:
        break
    i=0
    sum=0
    while i<5:
        if t%2==0:
            sum=sum+t
            t=t+2
            i=i+1
        else:
            t=t+1
    print(sum)