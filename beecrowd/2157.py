from os import sep
n=int(input())
while n!=0:
    a,b=input().split()
    a=int(a)
    b=int(b)
    num=''
    while a<=b:
        num=num+str(a)
        a+=1
    print(num,str(num)[::-1],sep='')
    n-=1