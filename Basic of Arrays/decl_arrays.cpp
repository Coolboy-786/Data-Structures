#include<iostream>
using namespace std;

int main()
{
	int A[5];
	int B[5]={2,3,4,56,23};
	int c[10]={123,1233};
	int D[5]={0};
	int E[]={1,2,3,4,5,5,2,1,12};
	
	for(int i=0;i<5;i++)
	{
		cout<<"Address of array location "<<i+1<<":- "<<&A[i]<<endl;
	}
	
	int k=0;
	
	while(k<5)
	{
		cout<<B[k]<<endl;
		k++;
	}
	
	return 0;
}
