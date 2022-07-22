#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;

};

int main()
{
	int x,y,z;
	
	cout<<"Enter two numbers to swap their values:- ";
	cin>>x>>y;
	
	swap(x,y);
	
	cout<<"The values of x and y are now :- "<<x<<","<<y<<endl;
}
