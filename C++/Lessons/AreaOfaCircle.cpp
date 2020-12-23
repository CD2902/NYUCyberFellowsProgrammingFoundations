#include <iostream>
using namespace std;

const float PI = 3.14159265; 

int main()
{

float inp_radius;
float cal_Area_Of_Circle;

cout<<"Please enter the radius:"<<endl;
cin>> inp_radius;
cal_Area_Of_Circle = PI * inp_radius * inp_radius;
cout << "The are of a circle with radius of "<<inp_radius<< " is "<< cal_Area_Of_Circle<<endl;

}
