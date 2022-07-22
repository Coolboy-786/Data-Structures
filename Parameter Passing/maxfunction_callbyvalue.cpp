#include<iostream>
using namespace std;

int Max(int a, int b)
{
	if(a>b)
	{
	a++;
	cout<<"The value of a in fucntion  is :- "<<a<<endl;
	return a;
}

	else
	return b;
};

int main()
{
	int x,y;
	
	cout<<"Enter the value of x and y: ";
	cin>>x>>y;
	
	cout<<"The value of x in function is :- "<<x<<endl;
	
	cout<<"The max among them is :- "<<Max(x,y);
}
