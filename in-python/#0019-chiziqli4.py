import math

x = int(input())
y = int(input())
z = math.log((pow((x+y),2) + math.sqrt(abs(y) + 2)) - (x - ((x*y) / ((pow(x,2)/2) - 5)))) + pow(math.cos (x + y), 2) / (math.pow(x+y,1/3))
print(f"{z:.2f}")