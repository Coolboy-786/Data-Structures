#include<iostream>
using namespace std;
 
 struct cuboid{
   float length;
   float breadth;
   float height;
 };
 
 int main()
 {
    struct cuboid c1;
 	struct cuboid *ctr1=&c1;
 	cout<<"Enter the length of cuboid: ";
 	cin>>c1.length;
 	cout<<"Enter the breadth of cuboid: ";
 	cin>>ctr1->breadth;
 	cout<<"Enter the height of cuboid: ";
 	cin>>ctr1->height;
 	double volume = ctr1->length*ctr1->breadth*c1.height;
 	cout<<ctr1->length;
 	cout<<ctr1->height;
 	cout<<c1.breadth;
 	cout<<"\n The Volume of the cuboid is :- "<<volume;
 	if(ctr1->length==c1.length)
 	{
 		cout<<"\nHello World";
	 }
	 else {
	 	cout<<"\nNot so funny";
	 }
 }
