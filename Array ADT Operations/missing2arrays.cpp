#include<iostream>
using namespace std;

struct Array{
	int arr[20];
	int length;
	int size;
};

void display(struct Array arr)
{
	cout<<"Array is:- ";
	for(int i=0;i<arr.length;i++)
	{
		cout<<arr.arr[i]<<" ";
	}
	cout<<endl;
};

void missingpair(struct Array arr)
{
	int low=arr.arr[0];
	int high=arr.arr[arr.length-1];
	int diff=low-0;
	cout<<"Missing Element is/are:- ";
	for(int i=0;i<arr.length;i++)
	{
		if(arr.arr[i]-i!=diff)
		{
			while(diff<arr.arr[i]-i)
			{
				cout<<i+diff<<" ";
				diff++;
			}
		}
	}
	cout<<endl;
}

int main()
{
	struct Array arr1={{1,2,3,4,5,6,7,8,10,11,12},11,12};
	
	struct Array arr2={{6,7,8,9,10,11,13,14,15,16,17},11,12};
	
	struct Array arr3={{6,7,8,9,11,12,15,17,19,24},10,20};
	
	display(arr1);
	display(arr2);
	
	missingpair(arr1);
	
	missingpair(arr2);
	missingpair(arr3);
}
