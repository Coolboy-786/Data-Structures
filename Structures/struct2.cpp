#include<iostream>
#include<math.h>
using namespace std;

const float pi = 3.1416;

struct cylinder{
	float radius;
	float height;
};

int main()
{
	struct cylinder c1;
	cout<<"Enter the radius of the cylinder :- ";
	cin>>c1.radius;
	cout<<"Enter the height of the cylinder :- ";
	cin>>c1.height;
	
	double volume = pi*pow(c1.radius,2)*c1.height;
	
	cout<<"\nThe volume of cylinder is :- "<<volume<<endl;
	
	double tot_sa = 2*pi*c1.radius*(c1.height+c1.radius);
	
	cout<<"Total surface area of cylinder is :- "<<tot_sa<<endl;
}
