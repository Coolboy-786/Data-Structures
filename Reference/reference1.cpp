#include<iostream>
using namespace std;
int main()
{
	int a=11;
	int &r=a;//refrence
	cout<<a<<endl;
	int b=23;
	r=b;
	cout<<r++<<endl;
	cout<<a<<r<<endl;
	
}
