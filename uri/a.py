def printPat(n):
    #Code here
    for i in range(n,0,-1):
        for j in range(n,0,-1):
            counter=i
            while(counter!=0):
                print(j,end=" ")
                counter-=1
        print('$', end=" ")
n= int(input('enter the number'))
printPat(n)