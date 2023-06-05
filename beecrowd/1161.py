def fact(t):
    if t==0 or t==1:
        return 1
    else:
        return fact(t-1) *t
while True:
    try:
        a,b=map(int,input().split())
        print(fact(a)+fact(b))
        #do something
    except EOFError:
        break

