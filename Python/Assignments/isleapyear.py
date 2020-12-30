def isleapyear(leapYear):
  if(leapYear % 400 == 0):
    return True
  if(leapYear % 100  == 0):
    return False
  if(leapYear % 4 == 0):
    return True
  return False


def printans():
  mybirthyear = int(input())
  if isleapyear(mybirthyear):
    print("Year {0} was a leap year".format(mybirthyear))




printans()



