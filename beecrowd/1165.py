n=int(input())
while n!=0:
    t=int(input())
    n=n-1
    i=2
    while i<=t:
        if t%i==0:
            break
        i=i+1
    if t==i:
        print("{:.0f} eh primo".format(t))
    else:
        print("{:.0f} nao eh primo".format(t))