#include<iostream>
using namespace std;
struct hello{
	int hell;
};

int main()
{
	int *ptr1;
	char *ptr2;
	float *ptr3;
	double *ptr4;
	long long int *ptr5;
	struct hello *ptr6;
	
	cout<<"\n Size of int pointer is :- "<<sizeof(ptr1);
	cout<<"\n Size of char pointer is :- "<<sizeof(ptr2);
	cout<<"\n Size of float pointer is :- "<<sizeof(ptr3);
	cout<<"\n Size of double pointer is :- "<<sizeof(ptr4);
	cout<<"\n Size of long int pointer is :- "<<sizeof(ptr5);
	cout<<"\n Size of structure pointer is :- "<<sizeof(ptr6);
	
}
