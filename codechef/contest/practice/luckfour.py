# We have populated the solutions for the 10 easiest problems for your support.
# Click on the SUBMIT button to make a submission to this problem.

#Note that it's python3 Code. Here, we are using input() instead of raw_input().
#You can check on your local machine the version of python by typing "python --version" in the terminal.

t = int(input())
for i in range(t):
    fours = 0
    num = int(input())
    while(num):
        if(num%10 == 4):
            fours +=1
        num = int(num/10)
    print(fours)




