#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int a[5];
    int sum=0;
    printf("Hello World\n");
    for(int i=1;i<=5;i++)
    {
        cout<<"Enter the "<<i<<"th number :- ";
        cin>>a[i];
        sum+=a[i];
       
    }
    cout<<"\nThe array is :- ";
    for(int i=1; i<=5;i++)
    {
        cout<< a[i] <<" ";
    }
    cout<<"\n";
    cout<<"Sum of elements in the array is : - " << sum;
    cout<<"\nSize of array is : "<<sizeof(a);
    
    return 0;
}
