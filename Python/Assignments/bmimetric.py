inp_weight = int(input("Please enter weight in kilograms: "))
inp_height = float(input("Please enter height in meters: "))


bmi_cal = inp_weight/(inp_height**2)

print("BMI is:","{:.10f}".format(bmi_cal))
