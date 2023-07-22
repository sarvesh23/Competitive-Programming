n=int(input())
vowel = {'a','e','i','o','u','A','E','I','O','U'}
while n!=0:
    n-=1
    t=int(input())
    word = input()
    count=4

    for i in range(t):
        if word[i] in vowel:
            count=4
        else:
            count-=1
            if count==0:
                break
    if count==0:
        print("NO")
    else:
        print("YES")