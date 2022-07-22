#include<iostream>
#include<math.h>
using namespace std;

//int [] fun(int n)

int * fun(int n)
{
	int *p;
	p=(int*)malloc(n*sizeof(int));
	//p = new int[n];
	for(int i=0;i<n;i++)
	{
		p[i]=pow(i+2,3);
	}
	
	return p;
};

int main()
{
	int *ptr,size;
	cout<<"Enter the size of the array:- ";
	cin>>size;
	
	ptr= fun(size);
	
	for(int i=0;i<size;i++)
	{
		cout<<ptr[i]<<endl;
	}
	
}
