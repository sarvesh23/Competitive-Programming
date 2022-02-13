sum=0
t=0
for i in range(1,40,2):
    sum=sum+i/(pow(2,t));
    t=t+1
print("{:.02f}".format(sum))