#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int A[5];
	int *p;
	
	for(int i=0;i<5;i++)
	{
		cout<<"Enter your element:- ";
		cin>>A[i];
	}
	p=(int*)malloc(5*sizeof(int));
	p[1]=2;
	p[0]=3;
	p[2]=92;
	p[3]=-12;
	p[4]=124-23;
	
	for(int i=0;i<5;i++)
	{
		cout<<p[i]<<endl;
	}
	
	int *ptr= new int[6];
	
	for(int i=0;i<6;i++)
	{
		cout<<"Enter the elemnt:- ";
		cin>>ptr[i];
	}
	cout<<ptr[5];
}
