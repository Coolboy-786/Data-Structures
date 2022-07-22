#include<iostream>

using namespace std;

int prime(int n)
{
	
	int count=0;
	cout<<"Factors are :- ";
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
			cout<<i<<" ";
		}
		
	}
	cout<<"\n";
	
	if(count==2)
	{
		cout<<n<<" is prime";
		
	}
	else if(count>2)
	{
	    cout<<n<<" is composite";
	}
	
};



int main()
{
	int num=0;
	
	cout<<"Enter a number :- ";
	cin>>num;
	
	prime(num);
	
	
}
