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

struct Array* unsortunion(struct Array *arr1,struct Array *arr2)
{
	int i,j,k;
	i=j=k=0;
	
	struct Array *arr3=(struct Array *)malloc(sizeof(struct 
Array));



    for(;i<arr1->length;i++)
    {
    	arr3->A[k++] = arr1->A[i];
	}

   
   
   int flag;
   
   for(j=0;j<arr2->length;j++)
   {
   	  flag=0;
   	  for(i=0;i<arr1->length;i++)
   	  {
   	  	if(arr2->A[j] == arr1->A[i])
   	  	{
   	  		flag=1;
		}
	  }
	  if(flag == 0)
	  {
	  	arr3->A[k++] = arr2->A[j];
	  }
   }
   
   arr3->length=k;
   arr3->size=14;
	
	return arr3;
}

int main()
{
	struct Array arr1 = {{3,5,9,0,1,4,2},10,7};
	struct Array arr2 = {{12,4,7,2,5,3,1},10,7};
	
	struct Array *arr3;
	
	Display(arr1);
	
	Display(arr2);
	
	arr3=unsortunion(&arr1,&arr2);
	
	Display(*arr3);
	
}
