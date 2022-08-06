#include<iostream>
using namespace std;

void duplower(string str)
{
	// making hash table for lower case letters 
	
	int H[26]={0};
	
	for(int i=0;str[i]!='\0';i++)
	{
		H[str[i]-97]++;
	}
	
	for(int i=0;i<26;i++)
	{
		if(H[i]>1)
		cout<<"The duplicate is "<<char(i+97)<<" and it is reapeated "<<H[i]<<" times"<<endl;
	}
}

void dupupper(string str)
{
	// making hash table for lower case letters 
	
	int H[26]={0};
	
	for(int i=0;str[i]!='\0';i++)
	{
		H[str[i]-65]++;
	}
	
	for(int i=0;i<26;i++)
	{
		if(H[i]>1)
		cout<<"The duplicate is "<<char(i+65)<<" and it is reapeated "<<H[i]<<" times"<<endl;
	}
}

int main()
{
	string str;
	cout<<" Enter the string:- ";
	getline(cin,str);
	
//	duplower(str);
	
	dupupper(str);
}
