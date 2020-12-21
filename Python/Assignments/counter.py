"""

"""

# print("Please enter the number of coins")

inp_quarters = input()
inp_dimes =  input()
inp_nickles = input()
inp_pennies = input()

totalDollars = float(inp_quarters)/4 + float(inp_dimes)/10 + float(inp_nickles)/20 + float(inp_pennies)/100
totalcent = float("{:.2f}".format(totalDollars))  -  float("{:.0f}".format(totalDollars)) 

print("The total is", "{:.0f}".format(totalDollars), "dollars and", "{:.2f}".format(totalcent).replace('0.','') ,"cents")





