// Kadane's Algorithm

#include<iostream>
using namespace std;

struct Array{
	int A[20];
	int size;
	int length;
};

void Display(struct Array arr)
{
	cout<<"Array is:- ";
	for(int i=0;i<arr.length;i++)
	{
		cout<<arr.A[i]<<" ";
	}
	cout<<endl;
}

int kadane(struct Array arr)
{
	int currsum=0;
	int maxsum=0;
	for(int i=0;i<arr.length;i++)
	{
		currsum+=arr.A[i];
		if(maxsum<currsum)
		{
			maxsum=currsum;
		}
		if(currsum<0)
		{
			currsum=0;
		}
	}
	return maxsum;
};

int main()
{
	struct Array arr1={{-2,-3,4,-1,-2,1,5,-3},10,8};
	
	Display(arr1);
	
	cout<<"The maximum sum of contigous array is:- "<<kadane(arr1);
}
