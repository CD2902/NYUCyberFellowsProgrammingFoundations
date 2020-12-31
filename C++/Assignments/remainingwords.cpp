# include <iostream>
# include <string.h>
using namespace std; 

string  remainingwords(string s)
{

int skipword = s.find(" ");
string firstword = s.substr(skipword+1);


return firstword; 
}

/*
int main()
{

cout << remainingwords("the quick brown fox");


return 0;
}


*/
