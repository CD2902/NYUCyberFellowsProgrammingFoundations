# include <iostream>
# include <algorithm>
using namespace std;

int avgoflst(int* lst, int size)
{
int sum =0;
for (int i =0; i <  size; i++)
   sum += lst[i];

  return sum/size;
}
