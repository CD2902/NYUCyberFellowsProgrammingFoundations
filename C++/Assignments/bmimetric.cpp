#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

double inp_weight, inp_height, bmiCal;

cout << "Please enter weight in kilograms: ";
cin >> inp_weight;
cout << "Please enter height om meters: ";
cin >> inp_height;
bmiCal = inp_weight/(inp_height*inp_height);
cout << "BMI is: "<<setprecision(4)<<bmiCal<<endl;


}
