#include <iostream>
using namespace std;

void fun1(int n)
{
    if(n<10)
    {
        printf("%d\t",n);
        fun1(n+1);
    }
}

int main() {
    
    int x=2;
     fun1(x);
    return 0;
}
