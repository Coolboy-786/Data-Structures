#include<iostream>
using namespace std;

int recursive(int n)
{
	
	if(n>0)
	{
	   return recursive(n-1)+n;
	}
	return 0;
}

int iterative(int n)
{
    int i,sum=0;
    
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    return sum;
}

int sum(int n){
    return n*(n+1)/2;
}

int main()
{
	int num=0,option;
	
	
	cout<<" 1)Recursion\n 2)Iteration\n 3)Normal Sum\n ";
	cout<<"Enter your choice for calculating the sum of n natural numbers:- ";
	cin>>option;
	
	cout<<"Enter the value of number:- ";
	cin>>num;
	
	
	
	switch(option)
	{
	    case 1:
	       cout<<"Sum of first "<<num<<" natural numbers using recursion is :- "<<recursive(num);
	       break;
	       
	   case 2:
	       cout<<"Sum of first "<<num<<" natural numbers using Iteration is :- "<<iterative(num);
	       break;
	       
	   case 3:
	       cout<<"Sum of first "<<num<<" natural numbers is :- "<<sum(num);
	       break;
	   
	   default:
	      cout<<"Wrong option entered !!1";
	      
	}
	
}
