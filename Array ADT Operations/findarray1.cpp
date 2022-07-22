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

int snatural(int n)
{
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=i;
	}
	return sum;
}

int missing1(struct Array arr1,int sarray)
{
	int sum=0;
	
	for(int i=0;i<arr1.length;i++)
	{
		sum+=arr1.arr[i];
	}
	
	return sarray-sum;
	
}

void missing2(struct Array arr2)
{
	int l=arr2.arr[0];
	int h=arr2.arr[arr2.length-1];
	int n=arr2.length;
	int diff=l-0;
	
	for(int i=0;i<arr2.length;i++)
	{
		if(arr2.arr[i]-i != diff)
		{
			cout<<"Missing element is :- "<<i+diff;
			break;
		}
	}
	
}

int main()
{
	struct Array arr1={{1,2,3,4,5,6,7,8,10,11,12},11,12};
	
	struct Array arr2={{6,7,8,9,10,11,13,14,15,16,17},11,12};
	
	display(arr1);
	
	cout<<"Missing number is:- "<<missing1(arr1,snatural(arr1.size));
	cout<<endl;
	missing2(arr1);
	cout<<endl;
	display(arr2);
	missing2(arr2);
	
}
