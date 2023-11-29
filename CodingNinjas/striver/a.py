def func(num):
    
    t= num
    num=num/10
    while t!=0 or num!=0:
        r=t%10
        r1=num%10
        num=num/10
        t=t/10
        if r-r1!=1 and r-r1!=-1:
            return False
    return True
a,b=map(int,input().split(sep=','))
for i in range(a,b): 
    if(func(i)==True):
        print(i)
