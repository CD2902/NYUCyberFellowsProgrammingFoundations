import math

print("Please enter the amount of money to convert:")

inp_num_dollars = float("{:.0f}".format(float(input("# of dollars: "))))
inp_num_cents = float("{:.2f}".format(float(input("# of cents: "))))
#print ("inp_num_dollars =", inp_num_dollars, "\n", "inp_num_cents",inp_num_cents,"\n")

total_money = inp_num_dollars + inp_num_cents/100
#print("total_money", total_money)


dollars_to_quarters = float(total_money) // 0.25
c = total_money %.25
leftover_dimes= c // 0.10
c = c%.10
leftover_nickles=c // 0.05
c = c%.05
#print("c", c)
c = round(c,2)
#print("c",c)
leftover_pennies = c / 0.01
#print("leftover_pennies =", leftover_pennies)

print("The coins are", int(dollars_to_quarters) ,"quarters,", int(leftover_dimes) ,"dimes,", int(leftover_nickles),"nickels" ,"and" ,int(leftover_pennies), "pennies")
