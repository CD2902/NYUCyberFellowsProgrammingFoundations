# include <iostream>
using namespace std;

int main()
{
	double inp_grades, inp_grades2;
	cin >> inp_grades >> inp_grades2;
	if (inp_grades < 60 && inp_grades2 < 60)
	{
		cout << "Student Failed:("<<endl;
	}
	else if(inp_grades > 95 && inp_grades >95 )
	{
		cout << "Student Graduated with Honors"<<endl;
	}
	else
	{
		cout << "Student Graduated!"<<endl;
	}








	return 0;
}
