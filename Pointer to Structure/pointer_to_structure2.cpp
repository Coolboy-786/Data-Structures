#include<iostream>
#include<math.h>
using namespace std;

const float pi = 3.1415;
struct cone{
	float height;
	double radius;
};

int main()
{
	cone *l1;
	
	l1=(struct cone*)malloc(sizeof(struct cone));
	//l1=new cone;
	cout<<"Enter the height of cone:- ";
	cin>>l1->height;
	cout<<"Enter the radius of cone:- ";
	cin>>l1->radius;
	
	double lat_h=sqrt(pow(l1->height,2)+pow(l1->radius,2));
	cout<<"\nThe lateral heigth of the cone is :- "<<lat_h;
	
	double volume = (pi*pow(l1->radius,2)*l1->height)/3;
	cout<<"\nVolume of the cone is :- "<<volume;
	
	double total_sa = pi*l1->radius*(l1->radius+lat_h);
	cout<<"\nTotal surface area of the cone is :- "<<total_sa;
}
