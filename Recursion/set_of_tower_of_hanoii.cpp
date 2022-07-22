#include <iostream>
using namespace std;
 
 int TOH(int n,int A,int B,int C)
 {
     if(n>0)
     {
         TOH(n-1,A,C,B);
         cout<<"("<<A<<","<<C<<")"<<endl;
         TOH(n-1,B,A,C);
     }
     else return 0;
 }

int main() {
    // Write C++ code here
    cout<<TOH(4,1,2,3);

    return 0;
}
