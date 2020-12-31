#include <iostream>
#include <iomanip>
using namespace std;


int main()
{

float inp_fitem, inp_sitem, inp_trate, bprice,  total, dprice;
char inp_ccard;

//cout << "Enter  price of the first iteme: " <<endl;
cin >> inp_fitem; 
//cout << "Enter price of the second item: "<<endl;
cin >> inp_sitem;
//cout << "Does customer have a club card? (Y/N): "<<endl;
cin >> inp_ccard;
//cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: "<<endl;
cin >> inp_trate ;
inp_trate = inp_trate/100;
bprice = inp_fitem + inp_sitem;

if(inp_ccard == 'y' || inp_ccard == 'Y')
{
  if(inp_fitem <= inp_sitem)
  {
    dprice = (inp_sitem + (inp_fitem * (.50))) *.9;
  }
  else
  {
  dprice = (inp_fitem + (inp_sitem * (.50))) *.9;
  }
}
else
{
  if(inp_fitem <= inp_sitem)
  {
    dprice =inp_sitem + (inp_fitem *(.50));
  }
  else
  {
    dprice = inp_fitem + ( inp_sitem *(.50) );
  }

}

total = dprice + (dprice * inp_trate) ;

cout << "Base price ="<<fixed << setprecision(2)<<bprice <<"\nPrice after discounts = "<< fixed << setprecision(2) << dprice << "\nTotal price = "<< total<<endl;




return 0;

}
