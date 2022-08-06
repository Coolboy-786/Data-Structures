#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//sorting
bool anagram1(string str1,string str2)
{
	int n=str1.length();
	
	int m=str2.length();
	
	if(n!=m)
	return false;
	
	else{
	
	sort(str1.begin(),str1.end());
	sort(str2.begin(),str2.end());
	
	for(int i=0;i<n;i++)
	{
	   if(str1[i]!=str2[i])
	   return false;
	}
	return true;
}
}

//brute force
void anagram2(string str1,string str2)
{
	int n1=str1.length();
	int n2=str2.length();
	int count1=0;
	int count2=0;
	if(n1!=n2)
	cout<<str1<<" and "<<str2<<" are not angrams because string length is not same"<<endl;
	
	else{
		for(int i=0;str1[i]!='\0';i++)
		{
			count1=0;
			for(int j=0;str2[j]!='\0';j++)
			{
				if(str1[i]==str2[j])
				{
					count1=1;
					break;
				}
			}
			if(count1==0)
			{
				count2=1;
				break;
			}
			
		}
		if(count2==1)
		cout<<str1<<" and "<<str2<<" are not angrams"<<endl;
		else
		cout<<"anagram"<<endl;
	}
}

//hash method

void anagram3(string str1, string str2)
{
	int n=str1.length();
	int m=str2.length();
	int i;
	
	int hash[26]={0}; //initializing hash table
	
	if(n!=m)
	{
		cout<<endl<<"Not an anagram";
	}
	else{
		for(int j=0;str1[j]!=0;j++)
		{
			hash[str1[j]-'a']++;
		}
		
		for( i=0;str2[i]!='\0';i++)
		{
			hash[str2[i]-'a']--;
			if(hash[str2[i]-97]<0)
			{
				cout<<"Not an angram";
				break;
			}
			
		}
		if(str2[i]=='\0')
		{
			cout<<"Anagram"<<endl;
		}
	}
}

int main()
{
	string str1;
	
	string str2;
	
	cout<<"Enter string 1:- ";
	getline(cin,str1);
	
	cout<<"Enter string 2:- ";
	getline(cin ,str2);
	
	 if (anagram1(str1, str2))
        cout << "The two strings are anagram of each other"<<endl;
    else
        cout << "The two strings are not anagram of each "
                "other"<<endl;
 
    
    
    anagram2(str1,str2);
    
    anagram3(str1,str2);
    
}
