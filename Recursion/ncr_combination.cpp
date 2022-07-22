#include<iostream>
using namespace std;

int fact(int num)
{
	if(num==0)
	return 1;
	else
	return fact(num-1)*num;
}
int nCriterative(int n,int r)
{
	int num,deno;
	num=fact(n);
	deno=fact(r)*fact(n-r);
	return num/deno;
}

int nCrrecursive(int n,int r)
{
	if(r==0 || n==r)
	return 1;
	else
	return nCrrecursive(n-1,r-1)+nCrrecursive(n-1,r);
}

int main()
{
	int n,r,opt;
	cout<<"1)nCr using recursion\n2)nCr using factorial function\n ";
	cout<<"Enter the option:- ";
	cin>>opt;
	
	
	
	switch(opt)
	{
		case 1:
			cout<<"Enter the value of n :- ";
	        cin>>n;
	        cout<<"Enter the value of r:- ";
	        cin>>r;
			cout<<n<<"C"<<r<<" = "<<nCrrecursive(n,r);
			break;
			
		case 2:
			cout<<"Enter the value of n :- ";
	        cin>>n;
	        cout<<"Enter the value of r:- ";
	        cin>>r;
			cout<<n<<"C"<<r<<" = "<<nCriterative(n,r);
			break;
			
		default:
			cout<<"Wrong option entered";
	}
	
}
