#include<iostream>

using namespace std;

struct Array 
{
	int A[15];
	int size;
	int length;
};

int Get(struct Array arr, int index)
{
	if(index>=0 && index<arr.length)
	{
		return arr.A[index];
	}
	return -1;
}

void Set(struct Array *arr, int index,int x)
{
	if(index>=0 && index<arr->length)
	{
		arr->A[index]=x;
	}
};

int Max(struct Array arr)
{
	int max = arr.A[0];
	
	for(int i=0;i<arr.length;i++)
	{
		if(arr.A[i]>max)
		{
			max = arr.A[i];
		}
	}
	return max;
}

int Min(struct Array arr)
{
	int min = arr.A[0];
	
	for(int i=0;i<arr.length;i++)
	{
		if(arr.A[i]<min)
		{
			min = arr.A[i];
		}
	}
	return min;
}

int Sum(struct Array arr)
{
	int sum=0;
	for(int i=0;i<arr.length;i++)
	{
		sum+=arr.A[i];
	}
	return sum;
}

float Avg(struct Array arr)
{
	float total = 0;
	for(int i=0;i<arr.length;i++)
	{
		total+=arr.A[i];
	}
	return total/arr.length;
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

int main()
{
	struct Array arr1 = {{8,3,9,15,6,10,7,2,12,4},15,10};
	
	
	
	Display(arr1);
	
	int index1,index2,x;
	cout<<endl<<"Enter the index of the Element you are searching for:- ";
	cin>>index1;
	
	cout<<endl<<"The Element at index "<<index1<<" is:- "<<Get(arr1,index1);
	
	cout<<endl<<"Enter the Element and the index of the array:- ";
	cin>>x>>index2;
	
	Set(&arr1,index2,x);
	cout<<endl;
	
	Display(arr1);
	
	cout<<"The Maximum element in the array is:- "<<Max(arr1);
	
	cout<<endl<<"The Minimum element in the array is:- "<<Min(arr1);
	
	cout<<endl<<"The Sum of all elements in the array is:- "<<Sum(arr1);
	
	cout<<endl<<"The Average of all elements in the array is:- "<<Avg(arr1);
	
}
