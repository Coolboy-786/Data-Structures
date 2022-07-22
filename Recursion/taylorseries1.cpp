/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

double taylor(int x,int n)
{
    static double p=1,f=1;
    double res;
    
    if(n==0)
    return 1;
    else{
        res = taylor(x,n-1);
        p=p*x;
        f=f*n;
        return res+p/f;
    }
}

int main()
{
    int x,n;
    
    cout<<"Enter the power of exponential:- ";
    cin>>x;
    cout<<"Enter the number of terms for taylor series:- ";
    cin>>n;
    
    cout<<"e^"<<x<<" = "<<taylor(x,n);
    
}

