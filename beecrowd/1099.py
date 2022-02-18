n = int(input())
while n!=0:
    a,b=input().split()
    n=n-1
    x=int(a)
    y=int(b)
    sum=0
    if x<y:
        for i in range(x+1,y):
            if(i%2!=0):
                sum=sum+i
    else:
        for i in range(y+1,x):
            if(i%2!=0):
                sum=sum+i
    print(sum,sep='',end='\n')