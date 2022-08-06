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

int main()
{
	string str3,str4;
	
	cout<<"Enter two strings:- ";
	
	getline(cin,str3);
	getline(cin,str4);
	
	string str1 = makecasesame(str3);
	string str2 = makecasesame(str4);
	
	int i,j;
	
	for(i=0,j=0;str1[i]!='\0',str2[j]!='\0';i++,j++)
	{
		if(str1[i]!=str2[j])
		{
			cout<<str1[i]<<" "<<str2[j]<<endl;
		   break;	
		}
		
	}
	if(str1[i] == str2[j])
	cout<<"The strings are same"<<endl;
	else if(str1[i]<str2[j])
	cout<<"string1 comes first in the dictionary"<<endl;
	else{
		cout<<"string2 comes first in the dictionary"<<endl;
	}
	
}
