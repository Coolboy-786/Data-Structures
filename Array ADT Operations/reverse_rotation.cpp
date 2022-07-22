#include<iostream>
#include<stdlib.h>
using namespace std;

struct Array{
   int A[10];
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

void Reversearray(struct Array *arr)
{
	int *B;
	int i,j;
	B=(int*)malloc(arr->length*sizeof(int));
	for(i=arr->length-1,j=0;i>=0;i--,j++)
	{
		B[j] = arr->A[i];
	}
	for(i=0;i<arr->length;i++)
	{
		arr->A[i]=B[i];
	}
}

void Revereseal(struct Array *arr)
{
	int i,j;
	int temp;
	
	for(i=0,j=arr->length-1;i<j;i++,j--)
	{
		temp=arr->A[i];
		arr->A[i] = arr->A[j];
		arr->A[j] = temp;
	}
}
int main()
{  
    struct Array arr1 = {{8,3,9,15,6,10,7,2,12,4},10,10};
    
    Display(arr1);
    
    int opt;
    cout<<"1)Reversal via auxillary array\n2)Reversal via rotation\n ";
    cout<<"Enter you option:- ";
    cin>>opt;
    
    switch(opt)
    {
    	case 1:
    		 Reversearray(&arr1);
             cout<<"Reverse ";
	         Display(arr1);
	         break;
	         
	    case 2:
	    	Revereseal(&arr1);
	    	cout<<"Reverse ";
	        Display(arr1);
	        break;
	        
	    default: 
	    cout<<"No option so!!";
	}
    
    
	return 0;
	
	
}
