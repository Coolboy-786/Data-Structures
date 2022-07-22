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
}

int Linearsearch(struct Array arr, int key)
{
	for(int i=0;i<arr.length;i++)
	{
		if(key == arr.A[i])
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	struct Array arr1 {{8,9,4,7,6,3,10,5,14,2},20,10};
	int key;
	cout<<"Enter the Element you are searching for:- ";
	cin>>key;
	
	
	
	cout<<"Index of "<<key<<" is:- "<<Linearsearch(arr1,key)<<endl;
	
	Display(arr1);
}
