#include<iostream>
using namespace std;

struct Array {
	int A[20];
	int size;
	int length;
};

void Display(struct Array arr)
{
	cout<<"Array is :- ";
	for(int i=0;i<arr.length;i++)
	{
		cout<<arr.A[i]<<" ";
	}
	cout<<endl;
}

int max(struct Array arr)
{
	int max=0;
	
	for(int i=0;i<arr.length;i++)
	{
		if(max<arr.A[i])
		{
			max=arr.A[i];
		}
	}
	return max;
}

void unsortdup(struct Array arr)
{
	int count;
	
	for(int i=0;i<arr.length-1;i++)
	{
		count=1;
		if(arr.A[i]!=-1)
		{
			for(int j=i+1;j<arr.length;j++)
		     {
			 
			    if(arr.A[i] == arr.A[j])
			    {
			    	count++;
			    	arr.A[j]=-1;
				}
		     }
		     
		     if(count>1)
		     {
		     	cout<<"The Duplicate Elements is:- "<<arr.A[i]<<" and reapeated "<<count<<" times"<<endl;
			 }
		}
		
	}
}

void hashingunsorted(struct Array arr)
{
	int high = arr.size;
	
	struct Array harr = {{0},20,20};
//	Display(harr); hash table
	
	for(int i=0;i<arr.length;i++)
	{
		harr.A[arr.A[i]]++;
		
	}
	for(int j=1;j<high;j++)
	{
		if(harr.A[j]>1)
		{
			cout<<"Duplicate is:- "<<j<<" and repeated "<<harr.A[j]<<" times."<<endl;
			
		}
	}
	Display(harr);
	
}

int main()
{
	struct Array arr1={{8,3,6,4,6,5,6,8,2,7},12,10};
	
	Display(arr1);
	
	unsortdup(arr1);
	
	hashingunsorted(arr1);
}
