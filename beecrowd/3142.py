while True:
    try:
        s=str(input())
        sum=0
        for i in s:
            sum=ord(i) - 65 +1
        sum=26*(len(s)-1)+sum
        if sum<=56:
            print(sum)
        else:
            print("Essa coluna nao existe Tobias!")
    except EOFError:
        break