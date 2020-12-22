inp_weight = float(input())
inp_height = float(input())


bmi_cal = (inp_weight*0.453592)/((inp_height*0.0254)**2)

print("bmi is:","{:.10f}".format(bmi_cal)) 
