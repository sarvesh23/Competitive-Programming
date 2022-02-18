days = int(input())
yr = days//365
days = days%365
month = days//30
days=days%30
print("{} ano(s)".format(yr))
print("{} mes(es)".format(month))
print("{} dia(s)".format(days))