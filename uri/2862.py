n=int(input())
while n!=0:
    n-=1
    x=int(input())
    if x <= 8000:
        print("Inseto!",end='\n')
    else:
        print("Mais de 8000!",end='\n')