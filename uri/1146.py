n=1
while n!=0:
    n=int(input())
    if n==0:
        break
    for i in range(1,n):
        print("{:.0f}".format(i),end=' ')
    print(n)