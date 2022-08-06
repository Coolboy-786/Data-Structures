#include<iostream>
using namespace std;

int main()
{
	int n;
	
	cout<<"Enter the size of an array:- ";
	cin>>n;
	
	int k;
	cout<<"Enter the value of target sum:- ";
	cin>>k;
	
	int array1[n];
	int array2[2];
	
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the "<<i+1<<"th element:- ";
		cin>>array1[i];
	}
	
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(array1[i]+array1[j]==k)
			{
				int k=0;
				cout<<"pair is :- ["<<array1[i]<<","<<array1[j]<<"]";
				
			}
		}
	}
	
	
	
}
