// Online C++ compiler to run C++ program online
#include <iostream>
#include<math.h>
using namespace std;

int convrecursivepower(int m,int n)
{
    if(n>0)
    {
        return convrecursivepower(m,n-1)*m;
    }
    return 1;
}

int highrecursivepower(int m,int n)
{
    if(n==0)
    return 1;
    else if(n%2==0)
    {
        return highrecursivepower(m*m,n/2);
    }
    
    else {
        return highrecursivepower(m*m,(n-1)/2)*m;
    }
    
}

int iterativerpower(int m,int n)
{
    int power=1;
    for(int i=1;i<=n;i++)
    {
        power=power*m;
    }
    return power;
}

int main() {
    // Write C++ code here
    int m,n,opt;
    cout<<"Enter the value of number of which you have to find the power:- ";
    cin>>m;
    cout<<"Enter the value of power:- ";
    cin>>n;
   
   cout<<"1)LesscomplexRecusrion\n2)HighComplexRecursion\n3)Iteration\n4)Conventional method\n";
   cout<<"Enter the option for finding "<<m<<"^"<<n<<" :- ";
   cin>>opt;


   cout<<m<<"^"<<n<<":- ";
    switch(opt)
    {
        case 1:
        cout<<convrecursivepower(m,n);
        break;
        
        case 2:
        cout<<highrecursivepower(m,n);
        break;
        
        case 3:
        cout<<iterativerpower(m,n);
        break;
        
        case 4:
        cout<<pow(m,n);
        break;
        
        default:
        cout<<"oops!!! Wrong choice entered";
        
    }
    return 0;
}
