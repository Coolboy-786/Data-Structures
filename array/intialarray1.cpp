#include<iostream>
using namespace std;
int main()
{
	int array1[10]={-2,-7,12,6};
	for(int i=0;i<10;i++)
	{
		cout<<" "<<array1[i];
	}
	//for-each loop
	for(int x:array1)
	{
		cout<<"\n"<<x;
	}
}
