#include <iostream>
using namespace std;

int main()
{
	int inp_num, absNum;
	cout << "Enter Number :";
	cin >> inp_num;
	if (inp_num < 0)
	{
		absNum = inp_num * -1;
		cout <<"|" <<inp_num <<"| = "<<absNum<<endl;
	}
	else
	{
		absNum = inp_num;
		cout <<"|" <<inp_num <<"| = "<<absNum<<endl;
	}

}
