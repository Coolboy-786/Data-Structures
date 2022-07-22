// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void swap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    
    cout<<"value of x = "<<*a<<" and y = "<<*b;
}

int main() {
    // Write C++ code here
    int x=21,y=17;
    
    swap(&x,&y);

    return 0;
}
