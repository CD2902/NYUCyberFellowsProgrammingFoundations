# include <iostream>
# include <algorithm>
using namespace std;

int maxinlst(int* lst, int size)
{
int max;
for (int i =0; i <  size; i++)

   
  for(int j =0; j < size; j++)
  {
    if (lst[i] > lst[j])
	
     {
       max = lst[i];
     }

  }
  return max;
}

/*
int main()
{

int list[] = {342,2,41,45};

cout <<  maxinlst(list,4) ;

}
*/
