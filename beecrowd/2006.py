n=int(input())
a,b,c,d,e = input().split()
a=int(a)
b=int(b)
c=int(c)
d=int(d)
e=int(e)
count =0 
if n==a:
    count+=1
if n==b:
    count+=1
if n==c:
    count+=1
if n==d:
    count+=1
if n==e:
    count+=1
print(count)