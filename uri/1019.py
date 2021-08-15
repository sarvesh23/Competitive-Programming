time=int(input())
hr=time//3600
time=time%3600
min=time//60
time=time%60
sec=time
print("{}:{}:{}".format(hr,min,sec))