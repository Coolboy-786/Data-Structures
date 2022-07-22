#include<iostream>
#include<math.h>
using namespace std;

struct Array {
	int A[20];
	int size;
	int length;
};

void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

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

int LinearSearch_Transposition(struct Array *arr,int key)
{
	for(int i=0;i<arr->length;i++)
	{
		if(key == arr->A[i])
		{
			swap(&arr->A[i],&arr->A[i-1]);
			return i;
		}
	}
	return -1;
}

int LinearSearch_moveFront(struct Array *arr,int key)
{
	for(int i=0;i<arr->length;i++)
	{
		if(key == arr->A[i])
		{
			swap(&arr->A[i],&arr->A[0]);
			return i;
		}
	}
	return -1;
}

int main()
{
	struct Array arr1 {{8,9,4,7,6,3,10,5,14,2},20,10};
	int key,opt;
	
	Display(arr1);
	
	cout<<"\n1)Linear Search\n2)Linear Search using Transposition\n3)Linear Search using Move to front\n";
	cout<<"Enter your option:- ";
	cin>>opt;
	
	switch(opt)
	{
		case 1:
			cout<<"Enter the Element you are searching for:- ";
	        cin>>key;
	        cout<<"Index of "<<key<<" is:- "<<Linearsearch(arr1,key)<<endl;
	        break;
	        
	    case 2:
	    	cout<<"Enter the Element you are searching for:- ";
	        cin>>key;
	        cout<<"Index of "<<key<<" is:- "<<LinearSearch_Transposition(&arr1,key)<<endl;
	        break;
	        
	    case 3:
	    	cout<<"Enter the Element you are searching for:- ";
	        cin>>key;
	        cout<<"Index of "<<key<<" is:- "<<LinearSearch_moveFront(&arr1,key)<<endl;
	        break;
	        
	    default:
	    	cout<<"Wrong option enetered!!";
	        	
	}
	
	
	Display(arr1);
}
