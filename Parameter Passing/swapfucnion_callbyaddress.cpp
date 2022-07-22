#include<iostream>

using namespace std;

void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int main()
{
	int x=21;
	int y=31;
	
	swap(&x,&y);
	
	printf("the value after swapping is x:- %d and y:- %d",x,y);
}
