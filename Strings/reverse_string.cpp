#include<iostream>
#include<string.h>
#include<stdio.h>
#include<cstring>
using namespace std;

int main()
{
	char str[40];
	
	cout<<"Enter a string:- ";
	cin.getline(str,40);
	
	
char st[100],rst[100]; 
int i,len; 
printf("Enter the string: "); 
gets(st);  //Input the string 
len=strlen(st);  //Calculate length of the string using strlen() function 
printf("\nThe reverse string is:"); 
for(i=len;i>=0;i--)  //Loop  to print reverse string 
{ 
rst[len-i]=st[i];  //Copy string in reverse order 
printf("%c",st[i]);  //Print the reverse string's character one by one 
} 
	
	cout<<" string by c program is :- "<<strrev(str);
	
	

}
