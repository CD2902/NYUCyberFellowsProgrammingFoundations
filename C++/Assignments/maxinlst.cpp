# include <iostream>
# include <algorithm>
using namespace std;

int maxinlst(int lst, int size)
{
int max;
for (int i =0; i <  size; i++)

   
  for(int j =0; i < size; j++)
  {
    if (lst[i] > lst[j])
	
     {
       max = lst[i];
     }

  }
  return max;
}


