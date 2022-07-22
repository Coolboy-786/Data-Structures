#include <iostream>
using namespace std;
struct Array{
    int A[20];
    int size;
    int length;
};

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

void Display(struct Array arr)
{
    cout<<"Array is:- ";
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
}

void hashsortdup(struct Array arr)
{
	int high = max(arr);
	
	struct Array harr = {{0},20,20};
//	Display(harr); hash table
	
	for(int i=0;i<arr.length;i++)
	{
		harr.A[arr.A[i]]++;
		
	}
	for(int j=0;j<high;j++)
	{
		if(harr.A[j]>1)
		{
			cout<<"Duplicate is:- "<<j<<" and repeated "<<harr.A[j]<<" times."<<endl;
		}
	}
//	Display(harr);
	
}

int main()
{
	struct Array arr1={{3,6,8,8,10,12,15,15,15,20},20,10};
	Display(arr1);
	hashsortdup(arr1);
}
