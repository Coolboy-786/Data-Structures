#include<iostream>
using namespace std;

int fun(int n)
{
	if(n>0)
	{
		cout<<n<<"\t";
		fun(n-1);
		fun(n-1);
	    
	}
}

int main()
{
int x=0;
cout<<"Enter x:- ";
cin>>x;
fun(x);
}
