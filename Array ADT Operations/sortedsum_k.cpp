#include<iostream>
using namespace std;

struct Array {
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

void sortedsum(struct Array arr, int k)
{
	int i=0;
	int j=arr.length-1;
	while(i<j)
	{
		if(arr.A[i]+arr.A[j] == k)
		{
			cout<<"("<<arr.A[i]<<","<<arr.A[j]<<")"<<endl;
			i++;
			j--;
		}
		else{
			if(arr.A[i]+arr.A[j]<k)
			{
				i++;
				j--;
			}
			else{
				j--;
			}
		}
	}
}

int main()
{
	struct Array arr = {{1,3,4,5,6,8,9,10,12,14},10,10};
	int k;
	Display(arr);
	cout<<"Enter the sum:- ";
	cin>>k;
	
	sortedsum(arr,k);
}
