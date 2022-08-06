#include<iostream>
#include<cstring>

using namespace std;

void wordcount(char arr[],int n)
{
	int word=0;
	
	for(int i=0;arr[i]!='\0';i++)
	{
		if(arr[i] == 32 && arr[i-1]!=32) //space ascii = 32
		word++;
	}
	cout<<"Number of words are:- "<<word+1<<endl;
}

void vowels_consonants(string str)
{
	int vcount=0;
	int ccount=0;
	
	for(int i=0;i<str.length();i++)
	{
		if(str[i]== 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i]== 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
         vcount++;
		 else if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))	
		 ccount++;	
	}
	
	cout<<" Number of vowels are:- "<<vcount<<endl<<" Number of consonants are:- "<<ccount;
}

int main()
{
	char array[40];
	
	cout<<"Enter the string to count the number of words:- ";
	cin.getline(array,40);
	
	wordcount(array,40);
	
	string str;
	
	cout<<"Enter the string to count the number of vowels and consonants:- ";
	getline(cin,str);
	
	vowels_consonants(str);
	
	
}
