n=int(input())
while n!=0:
    a,b = input().split()
    a=int(a)
    b=int(b)
    sum=0
    i=0
    while i<b:
        if a%2!=0:
            sum=sum+a
            a=a+1
            i=i+1
        else:
            a=a+1
        #print(a)
    print(sum)
    n-=1