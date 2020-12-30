def isleapyear():
  leapYear = int(input())
  if(leapYear % 400 == 0):
    print("Year {0} was a leap year".format(leapYear))
  elif(leapYear % 100  == 0):
    print("Year {0} was not a leap year".format(leapYear))
  elif(leapYear % 4 == 0):
    print("Year {0} was a leap year".format(leapYear))
  else:
    print("Year {0} was not a leap year".format(leapYear))






isleapyear()



