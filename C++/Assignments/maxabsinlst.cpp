# include <iostream>
# include <algorithm>
using namespace std;

int maxinlst(int* lst, int size)
{
int max;
for (int i =0; i <  size; i++)
{
  if(lst[i] < 0)
  {
    lst[i] = lst[i] * -1;
  }
   
  for(int j =0; j < size; j++)
  {
    if (lst[i] > lst[j])
        
     {
       max = lst[i];
     }

  }
}
  return max;
}

/*
int main()
{

int listp[] = {1 ,2,3,-5};

int x = maxinlst(listp, 4);





}
*/
