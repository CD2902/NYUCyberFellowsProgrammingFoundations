# include <iostream>
using namespace std;

const int DAYS_OF_WEEK  = 7;

int main()
{
int days;
int weekcal;
int remaindayscal;

cout<< "Please enter number of days you traveled:";
cin >> days;
weekcal = days / DAYS_OF_WEEK;
remaindayscal = days % DAYS_OF_WEEK;
cout << days << " days are " << weekcal << " weeks and " << remaindayscal << " days" <<endl;

return 0;

}
