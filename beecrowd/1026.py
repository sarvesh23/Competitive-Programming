while(True):
    try:
        a,b = input().split()
        a=abs(int(a))
        b=abs(int(b))
        c=a^b
        print(c)
    except EOFError:
        break
