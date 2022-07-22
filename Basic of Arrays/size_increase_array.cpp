#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int *p = (int*)malloc(5*sizeof(int));
	for(int i=0;i<5;i++)
	{
		cout<<"Enter the "<<i+1<<"th Element: ";
		cin>>p[i];
	};
	
	int *q = new int[10];
	
	for(int i=0;i<5;i++)
	{
		q[i]=p[i];
	}
	
	
	delete[]p;
      p=q;
    q=NULL;
	
	cout<<"Array with p:- ";
	for(int i=0;i<5;i++)
	{
		cout<<p[i]<<" ";
	}
	
	cout<<endl<<"Array with q:- ";
//	for(int i=0;i<5;i++)
//	{
//		cout<<q[i];
//	}
//	
	cout<<"q is set to null bro ";
}
