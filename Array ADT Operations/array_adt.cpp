#include<iostream>
#include<stdlib.h>
using namespace std;

struct Array
{
	int *A;
	int size;
	int length;
};

struct array
{
	int A[20];
	int size;
	int length;
};

void Display(struct Array arr)
{
	int i;
	cout<<endl<<"Array: ";
	for(i=0;i<arr.length;i++)
	{
		cout<<arr.A[i]<<" ";
	}
}

void Displayx(struct array arr)
{
	int i;
	cout<<endl<<"Array: ";
	for(i=0;i<arr.length;i++)
	{
		cout<<arr.A[i]<<" ";
	}
}

int main()
{
	struct Array arr;
	cout<<"Enter the size of the array:- ";
	cin>>arr.size;
	
	arr.A = (int*)malloc(arr.size*sizeof(int));
	arr.length=0;
	
	int n;
	cout<<"Enter the value of n:- ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Enter "<<i+1<<"th Elment:- ";
		cin>>arr.A[i];
	}
	
	arr.length=n;
	
	Display(arr);
	
	struct array arr1={{2,3,4,5,6},20,5};
	
	Displayx(arr1);
}
