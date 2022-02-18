x=int(input())
y=int(input())
t=0;
if x>y:
    b=x
    x=y
    y=b

for i in range(x+1,y):
    if i%2==1:
        t+=i
    
print(t)
