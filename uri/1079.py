n=int(input())
while n!=0:
    a,b,c=input().split()
    a=float(a)
    b=float(b)
    c=float(c)
    avg =(2*a+3*b+5*c)/10.0
    n-=1
    print("{:.01f}".format(avg))