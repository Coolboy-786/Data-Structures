#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
};

int main()
{
	int x,y;
	
	cout<<"Before Swapping\n";
	cout<<"Enter x: ";
	cin>>x;
	
	cout<<"Enter y: ";
	cin>>y;
	
	swap(x,y);
	
	cout<<"After Swapping\n";
	cout<<"Value of x: "<<x;
	cout<<"\n Value of y: "<<y; // Not swapped
}
