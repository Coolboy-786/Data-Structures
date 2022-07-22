#include<iostream>
#include<stdlib.h>
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
 printf("\nElements are\n");
 for(i=0;i<arr.length;i++)
 printf("%d ",arr.A[i]);
 
 cout<<endl;
} 

struct Array* Intersectionunsort(struct Array *arr1,struct Array *arr2)
{
	int i=0,j=0,k=0;
	
	struct Array *arr3=(struct Array *)malloc(sizeof(struct 
Array));

   for(i=0;i<arr1->length;i++)
   {
   	for(j=0;j<arr2->length;j++)
   	{
   		if(arr1->A[i] == arr2->A[j])
   		{
   			arr3->A[k++]=arr1->A[i];
		}
		
	}
   }
   
   arr3->length=k;
   arr3->size=14;
   
   return arr3;
}

int main()
{
	struct Array arr1={{3,5,9,0,1,4,2},10,7};
    struct Array arr2={{12,4,7,2,5,3,1},10,7}; 
    struct Array *arr3; 
    arr3=Intersectionunsort(&arr1,&arr2); 

      Display(arr1);
     Display(arr2);
     Display(*arr3);
 
return 0; 
}
