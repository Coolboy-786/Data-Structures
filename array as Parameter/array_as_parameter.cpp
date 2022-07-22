#include<iostream>

using namespace std;


//void fun(int A[],int n)
void fun(int *A,int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		cout<<"Enter the "<<i+1<<"th element of the array:- ";
		cin>>A[i];
		sum+=A[i];
	}
	
	cout<<"Sum of all the elements in the array is:- "<<sum;
};

int main()
{
	int n;
	int A[n];
	cout<<"Enter the size of the array:- ";
	cin>>n;
	
	fun(A,n);
}
