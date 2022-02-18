age =0 
count=0
sum=0
while age>=0:
    age=int(input())
    if age>=0:
        sum+=age
        count+=1

print("{:.02f}".format(sum/count))