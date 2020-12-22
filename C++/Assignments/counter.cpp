#include <iostream>
using namespace std;


int main()
{

double inp_quarters, inp_dimes, inp_nickles, inp_pennies;
double total;

cout <<  "Please enter the number of coins: "<<endl;
cout << "# of quarters: ";
cin >> inp_quarters;
cout << "# of dimes: ";
cin >> inp_dimes;
cout << "# of nickels: ";
cin >> inp_nickles;
cout << "# of pennies: ";
cin >> inp_pennies; 

total = inp_quarters*.25 + inp_dimes*.10 + inp_nickles*.05 + inp_pennies *.01;

cout <<"The total is " << int(total) << " dollars and "<< (total-int(total))*100<<" cents"<<endl;

return 0;
}
