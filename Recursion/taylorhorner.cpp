#include<iostream>

using namespace std;

double hornerrecusrion(int x,int n)
{
	static double res=1;
	if(n==0)
	return res;
	else{
	    res=1+(x*res)/n;
	    return hornerrecusrion(x,n-1);
	}
}

double horneriteration(int x,int n)
{
	double res=1;
	for(int i=n;i>0;i--)
	{
		res=1+(x*res)/i;
	}
	return res;
}

int main()
{
	int x,n;
	int opt;
	
	cout<<"1)Recursion\n2)Iteration\n";
	cout<<"Enter the option for calculation of taylor series through horners's rule:- ";
	cin>>opt;
	
	
	
	if(opt==1)
	{
	    cout<<"Enter the value to the power e:- ";
	    cin>>x;
	    cout<<"Enter the number of terms in the series:- ";
	    cin>>n;
	    cout<<"e^"<<x<<" = "<<hornerrecusrion(x,n)<<endl;
	}
	else if(opt==2)
	{
	    cout<<"Enter the value to the power e:- ";
	    cin>>x;
	    cout<<"Enter the number of terms in the series:- ";
	    cin>>n;
	    cout<<"e^"<<x<<" = "<<horneriteration(x,n)<<endl;
	}
	else{
	    cout<<"Sorry wrong option enetered!!";
	}
}
