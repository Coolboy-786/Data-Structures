#include<iostream>
using namespace std;

int * fun(int size)
{
    int *c;
	c = new int[size];	
	for(int i=0;i<size;i++)
	{
		cout<<"Enter the "<<i+1<<"th number :- ";
		cin>>c[i];
	}
	c[2]  = 41;
	
	return c;
};

int main()
{
	int n,*ctr;
	printf("Enter the size of the array:- ");
	scanf("%d",&n);
	
	ctr = fun(n);
	
	for(int i=0;i<n;i++)
	{
		cout<<ctr[i]<<endl;
	}
}
