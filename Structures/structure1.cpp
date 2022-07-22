#include<iostream>
using namespace std;

struct Rectangle
{
	int length;
	int breadth;
};

struct diagonal{
	int length;
	char x;
};

struct diagonal l1,l2,l3;
int main()
{
	struct Rectangle r,r2={12,7};
	r.length=8;
	r.breadth=19;
	printf("The area of the rectangle is :- %d\n",r.length*r.breadth);

	
	printf("size of structure Rectangle is %d bytes",sizeof(r2));
	struct diagonal d;
	printf("\nSize of structure diagonal is %d bytes",sizeof(d));
	
}
