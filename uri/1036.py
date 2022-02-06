from cmath import sqrt
a,b,c=input().split()
a=float(a)
b=float(b)
c=float(c)
D = b*b-4*a*c

if(D<0):
    print("Impossivel calcular")
elif(a==0.0):
    print("Impossivel calcular")
else:
    r1= (-b + sqrt(D) ) /2.0/a
    r2= (-b - sqrt(D) ) /2.0/a
    print("R1 = {:.5f}".format(r1.real))
    print("R2 = {:.5f}".format(r2.real))
