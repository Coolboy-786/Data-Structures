#include<iostream>
using namespace std; 

int main()
{
	int * ptr1;
	ptr1=new int[6];
	
	for(int i=0;i<6;i++)
	{
		cout<<"\nEnter "<< i+1 <<"th number for the array:- ";
		cin>>ptr1[i];
	}
	
	cout<<endl<<"The Dynamic Array is :- ";
	
	for(int i = 0;i<6;i++)
	{
		cout<<ptr1[i]<<" ";
	}
	
	// delete[]ptr1;
	free(ptr1); // used generally in c++
}
