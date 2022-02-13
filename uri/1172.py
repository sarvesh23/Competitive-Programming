a = []
for i in range(10):
    t=int(input())
    a.append(t)
b=[]
for i in range(10):
    if a[i]<=0:
        b.append(1)
    else:
        b.append(a[i])
for i in range(10):
    print("X[{:.0f}] = {:.0f}".format(i,b[i]))