#include<iostream>
#include<math.h>

using namespace std;

const float pi = 3.141592653589793238;

struct Cylinder{
	float radius;
	float height;
};

// call by address
void initialize(struct Cylinder *c,float r,float h){
	c->radius=r;
	c->height=h;
};

//call by value
double volume(struct Cylinder c)
{
	return pi*pow(c.radius,2)*c.height;
};

//call by address
void ChangeDimensions(struct Cylinder *c,float r1,float h1)
{
	c->radius=r1;
	c->height=h1;
};


int main()
{
	struct Cylinder cyl;
	
	cout<<"Enter the radius of the cylinder:- ";
	cin>>cyl.radius;
	cout<<"Enter the Height of the cylinder:- ";
	cin>>cyl.height;
	
	initialize(&cyl,cyl.radius,cyl.height);
	
	cout<<"Volume of the Cylinder is :- "<<volume(cyl);
	
	ChangeDimensions(&cyl,32.5,23);
}
