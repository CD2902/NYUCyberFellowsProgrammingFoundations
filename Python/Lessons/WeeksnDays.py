print("Please enter number of days you traveled:")
daysString=input()
intDays =  int(daysString)

weekCal =  intDays // 7
daysCal = intDays % 7

print(str(daysString) + " days " + " are " + str(weekCal) + " weeks and " + str(daysCal) + " days")



