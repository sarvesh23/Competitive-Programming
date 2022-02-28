def isprime(n):
    i=2
    while i<n:
        if n%i==0:
            return 0
        i+=1
    if i==n:
        return 1
    else:
        return 0
n=int(input())
t1=n
t2=n-2
while t2!=2:
    if isprime(t1)==1 and isprime(t2)==1:
        print("{:.0f} {:.0f}".format(t2,t1))
        break
    t2-=1
    t1-=1

    