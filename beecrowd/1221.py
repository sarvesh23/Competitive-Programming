a=int(input())
while a!=0:
    a-=1
    t=int(input())
    s=2
    while s<t/2:
        if t%s==0:
            s=t
            break
        s+=1
    if s==t:
        print("Not Prime")
    else:
        print("Prime")
    
    