#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"Enter the size of the array :- ";
	cin>>n;
	int arr[n];
	for(int i=1;i<=n;i++)
    {
        cout<<"Enter the "<<i<<"th number :- ";
        cin>>arr[i];
        sum+=arr[i];
       
    }
    cout<<"\nThe array is :- ";
    for(int i=1; i<=n;i++)
    {
        cout<< arr[i] <<" ";
    }
    cout<<"\n";
    cout<<"Sum of elements in the array is : - " << sum;
    cout<<"\nSize of array is : "<<sizeof(arr);
    
}
