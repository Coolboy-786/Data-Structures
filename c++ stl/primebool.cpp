// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;



int main()
{
    int n;
    cout<<"Enter a number :- ";
    cin>>n;
    
    int count=0;
    cout<<"prime factors are:- ";
    for(int i=1;i<=n;i++)
    
    
    {
    	if(n%i==0)
    	{
    		cout<<i<<" ";
    		count++;
		}
	}
	
	if(count>2 )
	{
		cout<<"not prime";
	}
	else
	{
		cout<<"prime";
	}
	
	cout<<"prime number uptil "<<n<<" are:- ";
	vector<int> primes;
    primes.push_back(2);
    cout<<"2 "<<"";
    for(int i=3; i < n; i++)
    {
        bool prime=true;
        
        for(int j=0;j<primes.size() && primes[j]*primes[j] <= i;j++)
        {
            if(i % primes[j] == 0)
            {
                prime=false;
                break;
            }
        }
        if(prime) 
        {
            primes.push_back(i);
            cout << i << " ";
        }
    }

    return 0;
}
