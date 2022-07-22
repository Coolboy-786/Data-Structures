#include<iostream>
#include<math.h>
#include<algorithm>
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

int Max(struct Array arr)
{
 int max=arr.arr[0];
 int i;
 for(i=1;i<arr.length;i++)
 {
 if(arr.arr[i]>max)
 max=arr.arr[i];
 }
 return max;
}

int Min(struct Array arr)
{
 int min=arr.arr[0];
 int i;
 for(i=1;i<arr.length;i++)
 {
 if(arr.arr[i]<min)
 min=arr.arr[i];
 }
 return min;
}

void missingunsort(struct Array arr)
{
	int low = Min(arr);
	int high = Max(arr);
	int n = arr.length;
	
	struct Array harr1={{0,0,0,0,0,0,0,0,0,0,0,0,0},12,12};
	
	display(harr1);
	
	
	for(int i=0;i<n;i++)
	{
		harr1.arr[arr.arr[i]]++;
		
	}
	display(harr1);
	cout<<"Missing numbers in array 1 are:- ";
	for(int i=low;i<high;i++)
	{
		if(harr1.arr[i] == 0)
		cout<<i<<" ";
	}
	
}

int main()
{
	struct Array arr1 = {{3,7,4,9,12,6,1,11,2,10},10,12};
	
	display(arr1);
	
	missingunsort(arr1);
	
	
}
