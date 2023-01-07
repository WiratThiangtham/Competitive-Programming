import math

max_ = 1
count = 1
n= int(input())
  	
while(n!=1):
  count = count+1
  if(n > max_):
    max_ = n
  if(n%2 == 0):
    n = math.floor(math.sqrt(n))
  else:
    n = math.floor(math.sqrt(n*n*n))

print(max_, count)