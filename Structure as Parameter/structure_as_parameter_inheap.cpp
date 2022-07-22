#include<iostream>
#include<math.h>

using namespace std;

// In heap

const float pi= 3.1416;

struct cone{
	float radius;
	float height;
};

//function Declaration

struct cone *fun(){
	struct cone *ctr1;
	
	ctr1=new cone;
	
	cout<<"Enter the radius of the cone :- ";
	cin>>ctr1->radius;
	
	cout<<"Enter the height of the cone :- ";
	cin>>ctr1->height;
	
	return ctr1;
}

struct cone *fun2(){
    struct cone *c1 = fun();
	
	double volume = (pi*pow(c1->radius,2)*c1->height)*0.33;
	
	cout<<"The Volume of this cone is :- "<<volume;
}
int main()
{
    
    fun2();
	
}
