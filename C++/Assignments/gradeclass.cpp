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
	else if(inp_grades > 90 && inp_grades >90 )
	{
		cout << "Student Graduated with Honors"<<endl;
	}
	else
	{
		cout << "Student Graudated!"<<endl;
	}








	return 0;
}
