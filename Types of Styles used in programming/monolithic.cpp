#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int length=0;
	int breadth=0;
	
	printf("Enter the length and breadth:- ");
	cin>>length>>breadth;
	
	int area=length*breadth;
	
	int peri = 2*(length+breadth);
	
	printf("Area= %d and perimeter = %d",area,peri);
	
}
