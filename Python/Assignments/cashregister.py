inp_fitem = float(input("Enter price of the first item: "))
inp_sitem = float(input("Enter price of the second item: "))
inp_ccard = input("Does customer have a club card? (Y/N): ")

inp_trate = float(input("Enter tax rate, e.g. 5.5 for 5.5% tax: "))/100

bprice = inp_fitem + inp_sitem

if(inp_ccard.capitalize() == 'Y'):
  if(inp_fitem <= inp_sitem):
    dprice =(inp_sitem + ( inp_fitem *(.50) )) *.9
  else:
    dprice = (inp_fitme + ( inp_sitem *(.50) )) *.9
else:
  if(inp_fitem <= inp_sitem):
     dprice =inp_sitem + ( inp_fitem *(.50) )
  else:
     dprice = inp_fitem + ( inp_sitem *(.50) ) 



total = dprice + (dprice * inp_trate) 

print("Base price =", '{0:.2f}'.format(bprice),"\nPrice after discounts =", '{0:.2f}'.format(dprice),"\nTotal price =",'{0:.2f}'.format(total))
