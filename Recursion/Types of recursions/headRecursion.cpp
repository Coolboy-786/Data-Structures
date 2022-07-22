#include <iostream>
using namespace std;

void fun1(int n)
{
    if(n<10)
    {
    	fun1(n+1);
        printf("%d\t",n);
    }
}

int main() {
    
    fun1(2);
    return 0;
}
