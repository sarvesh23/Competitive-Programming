def get_rem(num):
    return (num%10)
def find_sq(num):
    return (num*num)
def find_lst(num1,num2):
    list1=([0]*(num2-num1))
    counter = 0
    for number in range(num1,num2):
        result = ((number*100)+find_sq(get_rem(number)))
        list1[counter] = result
        counter+=1
    return list1
print(find_lst(23,28))

num1 = 5
num2 = 1
for value1 in range(num1,num2,-1):
    value2 =1
    for value2 in range(1,value1):
        print(value1+value2,end=" ")