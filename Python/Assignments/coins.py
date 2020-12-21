print("Please enter the amount of money to convert:")

inp_num_dollars = input("# of dollars: ")
inp_num_cents = input("# of cents: ")

total_money = float(inp_num_dollars) + (float(inp_num_cents)/100)
dollars_to_quarters = total_money // 0.25
c = total_money %.25
leftover_dimes= c // 0.10
c = c%.10
leftover_nickles=c // 0.05
c = c%.05
leftover_pennies = c // 0.01

 
print("The coins are", int(dollars_to_quarters) ,"quarters,", int(leftover_dimes) ,"dimes,", int(leftover_nickles),"nickles" ,"and" ,int(leftover_pennies), "pennies")
