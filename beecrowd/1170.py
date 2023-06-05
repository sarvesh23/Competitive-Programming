a=int(input())
while a!=0:
    a-=1
    c=float(input())
    count=0
    while(c>1):
        count+=1
        c=c/2
    print(count,"dias")