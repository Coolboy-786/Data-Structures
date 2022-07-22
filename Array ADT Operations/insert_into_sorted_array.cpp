#include<iostream>
using namespace std;

struct Array
{
	int A[10];
	int size;
	int length;
};

void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void Insert(struct Array *arr, int x)
{
	int i= arr->length-1;
	
	if(arr->length==arr->size)
	  return;
	
	while(i>=0 && arr->A[i]>x)
	{
		arr->A[i+1]=arr->A[i];
		i--;
	}
	arr->A[i+1]=x;
	arr->length++;
	
}

bool Issorted(struct Array arr)
{
	for(int i=0;i<arr.length-1;i++)
	{
		if(arr.A[i]>arr.A[i+1])
		{
			return false;
		}
		
	}
	return true;
}

void Rearrange(struct Array *arr)
{
	int i=0;
	int j=arr->length-1;
	
	while(i<j)
	{
		//i for positive numbers
		while(arr->A[i]<0)
		{
			i++;
		}
		while(arr->A[j]>0)
		{
			j--;
		}
		
		if(i<j)
		{
			swap(&arr->A[i],&arr->A[j]);
		}
	}
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
	struct Array arr1 = {{4,8,13,16,20,25,28,33},10,8};
	
	struct Array arr2 = {{1,8,13,23,20,25,33},10,7};
	
	struct Array arr3 = {{-6,3,-8,10,5,-7,-9,12,-4,2},12,10};
    
    int x;
    
    Display(arr1);
    
    Display(arr2);
    
    Display(arr3);
    
    cout<<"Enter the Element you want to insert:- ";
    cin>>x;
    
    Insert(&arr1,x);
    
    Display(arr1);
    
    cout<<"Is the array1 sorted:- ";
    if(Issorted(arr1) == 0)
    {
    	cout<<" False";
	}else{
		cout<<" True";
	}
    
    cout<<endl<<"Is the array2 sorted:- ";
    if(Issorted(arr2) == 0)
    {
    	cout<<" False";
	}else{
		cout<<" True";
	}
	
	Rearrange(&arr3);
	
	cout<<endl<<"Array 3 after rearranging positive and neagtive numbers:- "<<endl;
	Display(arr3);
	
}
