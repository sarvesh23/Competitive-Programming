a,b,c = input().split()
a=int(a)
b=int(b)
c=int(c)
if a>=b and a>=c:
    d=a
elif b>=a and b>=c:
    d=b
else:
    d=c
print("{} eh o maior".format(d),end='\n')