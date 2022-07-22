// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int fun(int n)
{
    if(n>100)
    return n-10;
    else
    return fun(fun(n+11));
}
int main() {
    
    int r=45;
    cout<<fun(r);
    return 0;
}
