# include <iostream>
using namespace std;


int main ()
{

char inp_char;
int lcaseToUcase;
cout << "Please enter lower case letter:" <<endl;
cin >> inp_char;

lcaseToUcase = int(inp_char) - 32;

//cout << "inp_char = "<< int(inp_char) << ", lcaseToUcase = "<< lcaseToUcase<< endl;

cout << "The upper case of " << inp_char << " is " << char(lcaseToUcase) <<endl;


}
