
t=0
avg=0
for i in range(6):
    a=float(input())
    
    if a>=0:
        t+=1
        avg+=a
avg=avg/t
print("{:.0f} valores positivos".format(t))
print("{:.01f}".format(avg))