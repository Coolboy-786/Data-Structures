#include<iostream>
using namespace std;

int fun(int n)
{
	static int x=0;
	if(n>0){
		x++;
		return fun(n-1)+x;
	}
	return 0;
}

int fun1(int n)
{
	if(n>0){
		return fun1(n-1)+n;
	}
	return 0;
}

int main(){
	int r;
	r=fun(5);
	int q=fun1(5);
	cout<<r<<endl<<q;
	return 0;
}
