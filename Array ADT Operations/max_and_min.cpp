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

void Max_Min(struct Array arr)
{
	int max=arr.A[0];
	int min=arr.A[0];
	
	for(int i=1;i<arr.length;i++)
	{
		if(min>arr.A[i])
		{
			min=arr.A[i];
		}
		else if(max<arr.A[i])
		{
			max=arr.A[i];
		}
	}
	
	cout<<"Maximun element is "<<max<<" and Minimum element is "<<min;
}

int main()
{
	struct Array arr = {{5,8,3,9,6,2,10,7,-1,4},10,10};
	int k;
	Display(arr);
	
	Max_Min(arr);
	
	
}
