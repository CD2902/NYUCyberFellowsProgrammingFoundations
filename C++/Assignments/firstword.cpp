# include <iostream>
# include <string.h>
using namespace std; 

string  firstword(stromg s)
{


string firstword = s.substr(0, s.find(" "));


return firstword; 
}

