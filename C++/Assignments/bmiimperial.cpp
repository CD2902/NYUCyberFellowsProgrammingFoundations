#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{

double inp_weight, inp_height, bmiCal, meters;

//cout << "Please enter weight in kilograms: ";
cin >> inp_weight;
//cout << "Please enter height om meters: ";
cin >> inp_height;
meters = inp_height * 0.0254;
bmiCal = (inp_weight*0.453592)/pow(meters,2);

cout << "BMI is: "<<setprecision(4)<<bmiCal<<endl;

}
