n=int(input())
while n!=0:
    t=int(input())
    sum=0
    n=n-1
    i=1
    while i<t:
        if t%i==0:
            sum+=i
        i=i+1
    if t==sum:
        print("{:.0f} eh perfeito".format(t))
    else:
        print("{:.0f} nao eh perfeito".format(t))