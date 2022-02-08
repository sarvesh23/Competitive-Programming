n=int(input())
for i in range(2,n+1):
    if i%2==0:
        print("{:.0f}^{:.0f} = {:.0f}".format(i,i,i*i))