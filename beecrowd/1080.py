l=[]
for i in range(100):
    a=int(input())
    l.append(a)
large=a
loc = 100
for i in range(100):
    if large<l[i]:
        large=l[i]
        loc=i+1
print(large)
print(loc)