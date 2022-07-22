#include<iostream>
using namespace std;

int recursicefact(int n)
{
	if(n==0)
	return 1;
	else{
		return recursicefact(n-1)*n;
	}
}

int iterativefact(int n)
{
	int mul=1;
	for(int i=1;i<=n;i++)
	{
		mul=mul*i;
	}
	return mul;
}

int main()
{
	int x=0,opt;
	
	cout<<" 1)Factorial via Recursion\n2)Factorial via Iteration\n";
	cout<<"Enter your choice:- ";
	cin>>opt;
	
	
	switch(opt)
	{
		case 1:
			cout<<"\nEnter the number for factorial:- ";
	        cin>>x;
			cout<<x<<"! = "<<recursicefact(x);
			break;
			
		case 2:
			cout<<"\nEnter the number for factorial:- ";
	        cin>>x;
			cout<<x<<"! = "<<iterativefact(x);
			break;
			
		default:
			cout<<"Wrong choice !!!";
	}
	
}
