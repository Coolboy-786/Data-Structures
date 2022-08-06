#include<iostream>
using namespace std;

string makecasesame(string str)
{
	for(int i=0;i<str.length();i++)
	{
		if(str[i]>=65 && str[i]<=90)
		str[i]+=32;
	}
	return str;
}

void reversecompare(string str1)
{
	string str2 = str1;
	char temp;
	int i,j;
	j=str1.length()-1;
	
	for(i=0;i<j;i++,j--)
	{
		temp=str1[i];
		str1[i]=str1[j];
		str1[j]=temp;
	}
	
	string str3 = makecasesame(str1);
	string str4 = makecasesame(str2);
	
	for(i=0,j=0;str3[i]!='\0',str4[j]!='\0';i++,j++)
	{
		if(str3[i]!=str4[j])
		break;
	}
	if(str3[i] == str4[j])
	cout<<str2<<" is a palindrome."<<endl;
	else
	cout<<str2<<" is not a palindrome."<<endl;
}

void Palindrome(string str)
{
	int i,j;
	j=str.length()-1;
	for(i=0;i<=j;i++,j--)
	{
		if(str[i]!=str[j])
		break;
	}
	
	if(str[i] == str[j])
	cout<<str<<" is a palindrome.";
	else
	cout<<str<<" is not a palindrome.";
}

int main()
{
	
	string str;
	cout<<"Enter the string:- ";
	getline(cin,str);
	
	reversecompare(str);
	
	Palindrome(str);
}
