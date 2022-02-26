n=int(input())
l=[]
lst=list(map(int,input().split()))
smallest=min(lst)
for i in range(n):
    if lst[i]==smallest:
        t=i
        break
print("Menor valor: {:.0f}".format(smallest))
print("Posicao: {:.0f}".format(t))

