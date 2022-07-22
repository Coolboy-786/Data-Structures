// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int Fib[30];

int Recursivefib(int n)
{
    if(n==0 || n==1)
    return n;
    else if(n>1)
    {
        return Recursivefib(n-2)+Recursivefib(n-1);
    }
}

int fib(int n)
{
    int t1=0,t2=1,sum;
    if(n==0 || n==1)
    return n;
    for(int i=2;i<=n;i++)
    {
        sum=t1+t2;
        t1=t2;
        t2=sum;
    }
    return sum;
}

int Memotizationfib(int n)
{
    if(n==0 || n==1)
    {
    Fib[n]=n;
    return n;
    }
    else {
        if(Fib[n-2]==-1)
        {
          Fib[n-2]=Memotizationfib(n-2);
        }
     
       if(Fib[n-1]==-1)
       {
         Fib[n-1]=Memotizationfib(n-1);
       }
     return Fib[n-2]+Fib[n-1];
    }
}


int fibprint(int n)
{
    int t1=0,t2=1,sum,count=0;
    if(n==0 || n==1)
    return n;
    for(int i=2;i<=n;i++)
    {
        
        if(count<n)
        {
           sum =  t1+t2;
            t1=t2;
            t2=sum;
            cout<<sum<<"\t";
            count++;
        }
    }
}
int main() {
    // Write C++ code here
    int n,opt,i;
    cout<<"Enter the term you want to find out in fibonacci series: ";
    cin>>n;
    
    for(i=0;i<n;i++)
    {
        Fib[i]=-1;
    }
    
    cout<<"1)Excessive Recursion\n2)Itreation\n3)Less Complex Recursion\n";
    cout<<"Enter your option:- ";
    cin>>opt;
    
    switch(opt)
    {
        case 1:
         cout<<n<<"th term of fibonacci series is: "<<Recursivefib(n);
         break;
         
        case 2:
         cout<<n<<"th term of fibonacci series is: "<<fib(n);
         break;
         
        case 3:
         cout<<n<<"th term of fibonacci series is: "<<Memotizationfib(n);
         break;
         
        default:
         cout<<"OOPs!!!!!!! Wrong choice";
    }
    
    
    

    cout<<"\n\nfibonacci series of "<<n<<" terms:- "<<"0\t1\t"<<fibprint(n);
    return 0;
}
