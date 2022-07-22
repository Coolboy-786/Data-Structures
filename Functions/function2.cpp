#include<iostream>
using namespace std;

float add(float a,float b)
{
	float sum;
	sum=a+b;
	
	return sum;
};

float subtract(float a, float b)
{
	float sub;
	sub=a-b;
	
	return sub;
};


float multiply(float a,float b)
{
	float mul;
	mul=a*b;
	
	return mul;
};


float division(float a, float b)
{
	float div = a/b;
	
	return div;
};


int main()
{
	int i,n;
	
	float x,y;
	
	cout<<"The Operations are:-  \n1)Addition\n2)Subtraction\n3)Multiplication\n4)Division\n"<<endl;
	cout<<"Enter your choice:- ";
	cin>>n;
	
	printf("Enter the value of x : ");
	cin>>x;
	printf("Enter the value of y : ");
	cin>>y;
	
	switch(n)
	{
		case 1:
			cout<<"The Sum of "<<x<<" + " <<y<<" is :- "<<add(x,y);
			break;
		
		case 2:
			cout<<"The Subtration  of "<<x<<" - " <<y<<" is :- "<<subtract(x,y);
			break;
			
		case 3:
			cout<<"The Multiplication of "<<x<<" X " <<y<<" is :- "<<multiply(x,y);
			break;
			
		case 4:
			cout<<"The Division of "<<x<<" / " <<y<<" is :- "<<division(x,y);
			break;
			
		default:
			cout<<"Wrong option is entered";
			
	}
}
