salary=float(input())
if salary >=0 and salary<=400.00:
    re = 15
elif salary>=400.01 and salary<=800.00:
    re=12
elif salary>=800.01 and salary<=1200.00:
    re=10
elif salary>=1200.01 and salary<=2000.00:
    re=7
else:
    re=4

t=salary*re/100.00
newsalary = salary +t
print("Novo salario: {:.02f}".format(newsalary))
print("Reajuste ganho: {:.02f}".format(t))
print("Em percentual: {:} %".format(re))