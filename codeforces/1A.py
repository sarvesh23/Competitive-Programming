#Theatre Square
import math
n,m,a= map(int,input().split())
# 6 6 4
# 6*6 = 36 4*4=16 
i=math.ceil(m/a)
j=math.ceil(n/a)
print(i*j)
