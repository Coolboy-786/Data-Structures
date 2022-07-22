#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

struct Array
{
	int A[10];
	int size;
	int length;
};

void Display(struct Array arr)
 {
    int i;
    printf("\nElements are:- ");
    for(i=0;i<arr.length;i++)
     printf("%d ",arr.A[i]);
 }
 
void Append(struct Array *arr,int x)
{
	if(arr->length<arr->size)
	arr->A[arr->length++]=x;
}

void Insert(struct Array *arr,int index,int x)
{
	if(index>=0 && index<=arr->length)
	{
		for(int i=arr->length;i>index;i--)
		{
			arr->A[i]=arr->A[i-1];
		}
		arr->A[index]=x;
		arr->length++;
	}
}

int Delete(struct Array *arr,int index)
{
	int x=0;
	
	if(index>=0 && index<=arr->length-1)
	{
		x = arr->A[index];
		for(int i=index;i<arr->length-1;i++)
		{
			arr->A[i]=arr->A[i+1];
		}
		arr->length--;
		return x;
	}
	return 0;
}

int main()
{
	struct Array arr1={{2,3,4,5,6},10,5};
	
	
	
	Append(&arr1,10);
	
	Insert(&arr1,2,-4);
	
	Display(arr1);
	
	cout<<endl<<"Element deleted:- "<<Delete(&arr1,4);
	
	Display(arr1);
}
