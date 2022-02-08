n=int(input())
inn=0
out=0
while n!=0:
    a=int(input())
    if a>=10 and a<=20:
        inn+=1
    else:
        out+=1
    n-=1
print("{:.0f} in".format(inn))
print("{:.0f} out".format(out))