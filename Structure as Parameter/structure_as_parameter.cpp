#include<iostream>

using namespace std;

// Call by value

struct Cuboid{
	float length;
	float breadth;
	float height;
};

void fun(struct Cuboid c1){
	c1.length=25;
	cout<<"\nVolume of the cuboid will be :- "<<c1.length*c1.breadth*c1.height;
};

int main()
{
	struct Cuboid c;
	struct Cuboid *ctr;
	ctr=&c;
	cout<<"Enter the length of the cuboid :- ";
	cin>>c.length;
	cout<<"Enter the breadth of the cuboid :- ";
	cin>>c.breadth;
	cout<<"Enter the height of the cuboid :- ";
	cin>>c.height;
	
	cout<<"\n\nLength :- "<<ctr->length<<"\nBreadth:- "<<ctr->breadth<<"\nHeight:- "<<ctr->height;
	
	fun(c);
}
