from os import sep


a=1
b=1
while a>0 or b>0:
    a,b = input().split()
    a=int(a)
    b=int(b)
    if a<=0 or b<=0:
        break
    else:
        if a>b:
            sum=0
            for i in range(b,a+1):
                print(i,end=" ")
                sum=sum+i
            print("Sum={:.0f}".format(sum),end='\n')
        else:
            sum=0
            for i in range(a,b+1):
                print(i,end=" ")
                sum=sum+i
            print("Sum={:.0f}".format(sum),end='\n')