inp_day = input()
inp_time = int(input())
inp_duration = int(input())

rate = 0

if(inp_day == "Mon"):
  if(800 < inp_time < 1800):
    rate = .40
  elif(inp_time < 800 or inp_time >1800):
    rate = .25
if(inp_day == "Tue"):
  if(800 < inp_time < 1800):
    rate = .40
  elif(inp_time < 800 or inp_time >1800):
    rate = .25
if(inp_day == "Wed"):
  if(800 < inp_time < 1800):
    rate = .40
  elif(inp_time < 800 or inp_time >1800):
    rate = .25
if(inp_day == "Thr"):
  if(800 < inp_time < 1800):
    rate = .40
  elif(inp_time < 800 or inp_time >1800):
      rate = .25
if(inp_day == "Fri"):
  if(800 < inp_time < 1800):
    rate = .40
  elif(inp_time < 800 or inp_time >1800):
    rate = .25
if(inp_day == "Sat"):
    rate = .15
if(inp_day == "Sun"):
    rate = .15

total = rate * inp_duration

print("This call will cost $", '{:.2f}'.format(total), sep='')


