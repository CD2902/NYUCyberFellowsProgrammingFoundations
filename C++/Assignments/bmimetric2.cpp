# include <iostream>
# include <iomanip>
using namespace std;

int main()
{
  float inp_weight,inp_height, cal_bmi;
  cout << "Please enter weight in kilograms: "<<endl;
  cin >> inp_weight;
  cout << "Please enter height in meters: ";
  cin >> inp_height;

  cal_bmi = inp_weight/(inp_height*inp_height);

  if(cal_bmi < 18.5)
    cout << "BMI is: " <<setprecision(4)<< cal_bmi <<", status is underwight"<<endl;
  else if(18.4 < cal_bmi < 24.10 )
   cout << "BMI is: " <<setprecision(4) <<cal_bmi <<", status is Normal"<<endl;
  else if(25.1 < cal_bmi < 30.0 ) 
  cout << "BMI is: "<<setprecision(4) <<cal_bmi <<", status is Overweight"<<endl;
  else if(cal_bmi > 29.9)
  cout << "BMI is: " <<setprecision(4) <<cal_bmi <<", status is Obese"    <<endl;
      





}
