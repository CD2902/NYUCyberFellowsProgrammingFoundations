#include <iostream>
using namespace std;

int main()
{

int inp_int, count =0, n1=1,n2 = 1;

cin >> inp_int;
for (int x =0; x < inp_int; x++)
{
  cout << n1<<endl;
  int nth = n1+ n2;
  n1 =n2;
  n2 = nth;

}



return 0;
}
