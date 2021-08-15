import math
 
x1,y1 = input().split()
x2,y2 = input().split()
x1,y1,x2,y2 = float(x1),float(y1),float(x2),float(y2)
dis = math.sqrt( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) )
print("{:.4f}".format(dis))