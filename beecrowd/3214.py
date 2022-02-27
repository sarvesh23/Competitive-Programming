e,f,c = input().split()
e=int(e)
f=int(f)
c=int(c)
t=e+f
sum=0
while t>=c:
    sum=sum+t//c
    t=t//c + t%c
print(sum)