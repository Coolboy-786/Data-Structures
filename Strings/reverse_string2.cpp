#include<iostream>
#include<cstring>
using namespace std;


string reverseWord(string str){
    
  //Your code here
  
  char temp;
  
  int i,j;
  
  j=str.length()-1;
  
  for(i=0;i<j;i++,j--)
  {
      temp=str[i];
      str[i]=str[j];
      str[j]=temp;
  }
  
  return str;
}


int main()
{
	char a[30],temp;
	
	cout<<"Enter string:- ";
	cin.getline(a,30);
	
	int i,j;
	for(j=0;a[j]!='\0';j++)
	{
		
	}
	j--;
	
	for(i=0;i<j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	cout<<"Reversed string is:- "<<a<<endl;
	
	cout<<" Again reversed string is:- "<<reverseWord("Merry Christmas!!");
	
}
