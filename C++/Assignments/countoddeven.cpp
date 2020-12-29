# include <iostream>
using namespace std;

int main()
{

int inp1 , inp2 , inp3, inp4, evencount=0, oddcount=0;

cin >> inp1 >> inp2 >> inp3 >> inp4;

if (inp1 % 2 ==0)
{
	evencount++;
}
else
{
	oddcount++;
}

if (inp2 % 2 ==0)
{
        evencount++;
}
else
{
        oddcount++;
}
if (inp3% 2 ==0)
{
        evencount++;
}
else
{
        oddcount++;
}
if (inp4 % 2 ==0)
{
        evencount++;
}
else
{
        oddcount++;
}


if (evencount > oddcount)
{
	cout << "more evens"<< endl;
}
else if(evencount < oddcount)
{
	cout << "more odds" <<endl;
}
else
{
	cout << "same number of evens and odds"<<endl;
}





	return 0;
}
