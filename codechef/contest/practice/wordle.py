n=int(input())
while n>0:
    a=str(input())
    b=str(input())
    output=""
    for i in range(5):
        if a[i]==b[i]:
            output+="G"
        else:
            output+="B"
    print(output)
    n-=1