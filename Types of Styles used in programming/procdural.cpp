#include<iostream>
#include<stdio.h>

using namespace std;


int  area(int length,int breadth)
 {
 	return length*breadth;
 }
 
 int perimetre(int length,int breadth)
 {
 	return 2*(length+breadth);
 }
 
int main()
{
		int length=0;
	int breadth=0;
	
	printf("Enter the length and breadth:- ");
	cin>>length>>breadth;
	
	int a = area(length,breadth);
	
	int peri = perimetre(length,breadth);
	
	printf("Area= %d and perimeter = %d",a,peri);
}
