#include<iostream>

using namespace std;


// call by reference
struct array{
	int arr1[5];
	int size;
};

void fun(struct array &array1)
{
	for(int i=0;i<5;i++)
	{
		cout<<"Enter the "<< i+1<<"th Element of the array :- ";
		cin>>array1.arr1[i];
	}
	
	for(int i=0;i<5;i++)
	{
		cout<<array1.arr1[i]<<" ";
	}
};

//void fun2(struct array *array2)
//{
//	fun()
//}

int main()
{
	struct array arr;
	
	
	fun(arr);
	
}
