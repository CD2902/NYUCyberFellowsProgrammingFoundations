# include <iostream>
# include <string.h>
using namespace std; 

string  remainingwords(string s)
{

int length = s.length();
string firstword = s.substr(length);


return firstword; 
}


int main()
{


string s ;
getline(cin, s);

int middle= s.length()/2;
//cout << "Length  " << s.length() << endl;
cout << "Middle character: "<<  s[middle]<<endl;
cout << "First half: " << s.substr(0, middle)<<endl;
cout <<  "Second half: " << s.substr(middle+1)<<endl;



return 0;
}



