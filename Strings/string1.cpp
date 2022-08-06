#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int main()
{
	char temp = 'a';
	
	cout<<"ASCII code for "<<temp << " is :- "<<int(temp);
	
	int n;
	cout<<endl<<"Enter the size of your name:- ";
	cin>>n;
	
	char name[n];
	
    gets(name);
	
	cout<<name;
	
	char name1[]="Anurag Maurya";
    char name2[20];
    cout<<"Enter your name ";
    gets(name2);
    printf("ok %s\n",name2);
    std::cout<<name1<<" and "<<name2<<" are friends";
    
    for(int i=0;i<130;i++)
    {
       cout<<"The ascii codes for "<<char(i)<<" is:- "<<i<<endl;
	}
}
