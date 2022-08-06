#include<iostream>
#include<stdio.h>

using namespace std;


void toupper(char arr[],int n)
{
	for(int i=0;arr[i]!='\0';i++)
	{
		if(arr[i]>=97 && arr[i]<=122)
		arr[i]-=32;
	}
	
	cout<<" upper case of the string is:- "<<arr<<endl;
};

void tolower(char arr[],int n)
{
	for(int i=0;arr[i]!='\0';i++)
	{
		if(arr[i]>=65 && arr[i]<=90)
		arr[i]+=32;
	}
	cout<<" lower case of the string is:- "<<arr;
}

int main()
{
	string str;
	cout<<"Enter string :- ";
	
	getline(cin,str);
	
	for(int i=0;i<str.length();i++)
	{
		if(str[i]>64 &&str[i]<91)
		{
			str[i]+=32;
		}
		else if(str[i]>=97 && str[i]<=122)
		{
			str[i]-=32;
		}
	}
	
	cout<<"Changed case of string is:- "<<str<<endl;
	
	char arr[50];
	
	cout<<"Enter the string:- ";
	cin.getline(arr,50);
	
	toupper(arr,40);
	
	tolower(arr,40);
}
