#include <iostream>
using namespace std;

double e(int x, int n)
{
    double  p=1,f=1,res=1;
    for(int i=1;i<=n;i++)
    {
        p=p*x;
        f=f*i;
        res=res+p/f;
        
    }
    return res;
}

int main() {
    // Write C++ code here
    cout << e(7,25);

    return 0;
}
