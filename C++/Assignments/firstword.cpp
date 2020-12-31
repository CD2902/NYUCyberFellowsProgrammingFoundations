# include <iostream>
# include <string.h>
using namespace std; 

string  firstword(string s)
{


string firstword = s.substr(0, s.find(" "));


return firstword; 
}

