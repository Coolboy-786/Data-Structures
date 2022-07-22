#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int a=10;
	int *p=&a;
	cout<<"Value = "<< *p<<" Address = "<< p;
	
	cout<<endl<<"\n---------Array Pointer--------------\n";
	int *ptr;
	int arr[4]={12,32,53,93};
	ptr=arr;
	for(int i=0;i<4;i++)
	cout<<"\nPrinting using normal array :- "<<arr[i]<<endl;
	
	for(int i=0;i<4;i++)
	{
		printf("\nPrinting using pointer :- %d\n",ptr[i]);
	}
	
	cout<<endl<<"\n-----------Using Malloc Function---------------\n";
	int *ctr=(int*)malloc(5*sizeof(int));
	ctr[0]=-9;
	ctr[1]=-1;
	ctr[3]=87;
	for(int i=0;i<5;i++)
	cout<<" "<<ctr[i];
	
}
