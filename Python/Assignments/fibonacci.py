inp_int = int(input("Please enter a positive integer greater 1: "))

count = 0

n1 =1
n2 = 1

for x in range(0, inp_int ):
  print(n1)
  nth = n1 +n2
  n1 =n2
  n2 = nth
  
