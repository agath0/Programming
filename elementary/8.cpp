#include <iostream>
#include <math.h>
#define M_PI 3.14

using namespace std;

float area_of_circle(float radius)
{
	return M_PI*radius*radius;
}

int main()
{
	float area,radius;
	cout<<"\nEnter the radius of circle : ";
	cin>>radius;
	area=area_of_circle(radius);
	cout<<"\nArea of the circle : "<<area<<endl;
	return 0;
}

