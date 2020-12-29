inp_weight = float( input("Please enter weight in kilograms: "))
inp_height = float(input("Please enter height in meters: "))

cal_bmi= inp_weight/(inp_height**2)
status = ""

if(cal_bmi < 18.5):
  status = "underweight"
elif(18.5 < cal_bmi < 24.9):
  status = "normal"
elif(24.9 < cal_bmi < 29.9):
  status = "overweight"
elif(29.9 < cal_bmi):
  status = "obese"

print("bmi is: ",round(cal_bmi,2),", status is ",status,sep='')

