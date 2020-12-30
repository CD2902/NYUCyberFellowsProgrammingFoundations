def isleapyear(mybirthyear):
  if(leapYear % 400 == 0):
    #print("Year {0} was a leap year".format(mybirthyear))
    return True
  elif(leapYear % 100  == 0):
    #print("Year {0} was not a leap year".format(mybirthyear))
    return False
  elif(leapYear % 4 == 0):
    #print("Year {0} was a leap year".format(mybirthyear))
    return True
  else:
    #print("Year {0} was not a leap year".format(mybirthyear))
    return False





#isleapyear()



