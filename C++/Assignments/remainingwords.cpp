# include <iostream>
# include <string.h>
using namespace std; 

string  remainingwords(string s)
{

int skipword = s.find(" ");
string firstword = s.substr(skipword);


return firstword; 
}
