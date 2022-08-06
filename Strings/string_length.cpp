#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	string str;
	cout<<"Enter the string :- ";
	getline(cin,str);
	
	cout<<"Length of string is:- "<<str.length()<<endl;
	
	
	
	char str1[50];
	int i;
	cout<<"Enter next string:- ";
	cin.getline(str1,50);
	
	for( i=0;str1[i]!='\0';i++)
	{
		
	}
	
	cout<<"The length of the above string is:- "<<i;
}
