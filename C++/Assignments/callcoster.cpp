# include <iostream>
# include <iomanip>
# include <string>
using namespace std;

int main()
{
int   inp_time, inp_duration;
string inp_day;
float rate =0, total; 

cin >> inp_day;
cin >>inp_time;
cin >> inp_duration;




if(inp_day == "Mon")
{
  if(800 < inp_time && inp_time < 1800)
    rate = .40;
  else if(inp_time < 800 || inp_time >1800)
    rate = .25;
}
if(inp_day == "Tue")
{
  if(800 < inp_time && inp_time < 1800)
    rate = .40;
  else if(inp_time < 800 || inp_time >1800)
    rate = .25;
}
if(inp_day == "Wed")
{
  if(800 < inp_time && inp_time < 1800)
    rate = .40;
  else if(inp_time < 800 || inp_time >1800)
    rate = .25;
}
if(inp_day == "Thr")
{
  if(800 < inp_time && inp_time < 1800)
    rate = .40;
  else if(inp_time < 800 ||  inp_time >1800)
      rate = .25;
}
if(inp_day == "Fri")
{
  if(800 < inp_time  && inp_time < 1800)
    rate = .40;
  else if(inp_time < 800 || inp_time >1800)

    rate = .25;
}
if(inp_day == "Sat")
    rate = .15;
if(inp_day == "Sun")
    rate = .15;

total = rate * inp_duration;

cout << "This call will cost $"<< fixed << setprecision(2)<< total<< endl;


return 0;
}

