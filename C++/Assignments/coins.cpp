# include <iostream>
using namespace std;

int main()
{
	double inp_dollars, inp_cents, total_quaters,total_dimes,total_nickles,total_pennies;
	int c,total;
	
	cout << "Please enter the amount of money to convert:" <<endl;
	cout << "# of dollars: ";
	cin >> inp_dollars;
	cout << "# of cents: ";
	cin >> inp_cents;
	total = (inp_dollars + inp_cents/100)*100;
	cout << "toatal" << total;
	total_quaters = total / 25;
	c = total % 25;
	total_dimes = c / 10;
        c = c % 10;
        total_nickles = c/5;
	c =c% 5;
        total_pennies = c/1;
        cout << "The coins are "<<total_quaters<<" quarters, "<<total_dimes<<" dimes, "<<total_nickles<<" nickels and "<<total_pennies<< " pennies"<<endl;

}
