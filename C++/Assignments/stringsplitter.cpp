# include <iostream>
# include <string.h>
using namespace std; 

int main()
{

string word;
cin >> word;


string firstword = word.substr(0, word.find(" "));
cout <<firstword<<endl;










return 0; 
}

