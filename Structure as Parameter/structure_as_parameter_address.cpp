#include<iostream>
using namespace std;

// call by address
struct cuboid{
	double length;
	double breadth;
	double height;
};

void fun(struct cuboid *c){
	cout<<"Enter the length of the cuboid:- ";
	cin>>c->length;
	cout<<"Enter the breadth of the cuboid:- ";
	cin>>c->breadth;
	cout<<"Enter the height of the cuboid:- ";
	cin>>c->height;
	c->height=21;
};

int main()
{
	struct cuboid *ctr;
	
	fun(ctr);
	double Totalsa = 2*((ctr->length*ctr->breadth)+(ctr->breadth*ctr->height)+(ctr->length*ctr->height));
	cout<<"Total Surface area of the cuboid will be:- "<<Totalsa;
}
