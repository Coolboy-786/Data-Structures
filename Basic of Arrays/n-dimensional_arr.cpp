#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	//Inside Stack
	int arr1[3][4]={{1,2,3,4},{2,4,6,8},{1,3,5,7}};
	
	//Array using pointers
	int *arr2[3];
	
	arr2[0]=new int[4];
	arr2[1]=(int*)malloc(4*sizeof(int));
	arr2[2]=new int[4];
	
	//Array using Double pointers
//	int **arr3;
  //or
  int **arr3;
   arr3=(int**)malloc(3*sizeof(int*));
	arr3[0]=new int[4];
	arr3[1]=(int*)malloc(4*sizeof(int));
	arr3[2]=(int*)malloc(4*sizeof(int));
	
	cout<<"Array1 inside stack:- "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<arr1[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"Array2 inside heap:- "<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<"Enter the Elements of the "<<i+1<<"th row:- "<<endl;
		for(int j=0;j<4;j++)
		{
			cout<<"Enter the "<<j+1<<"th column:- ";
			cin>>arr2[i][j];
		}
		cout<<endl;
	}
	
	cout<<"Array2 inside heap:- "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<arr2[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"Array3 inside heap:- "<<endl;
	for(int i=0;i<2;i++)
	{
		cout<<"Enter the Elements of the "<<i+1<<"th row:- "<<endl;
		for(int j=0;j<3;j++)
		{
			cout<<"Enter the "<<j+1<<"th column:- ";
			cin>>arr3[i][j];
		}
		cout<<endl;
	}
	
	cout<<"Array3 inside heap:- "<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr3[i][j]<<" ";
		}
		cout<<endl;
	}
}
