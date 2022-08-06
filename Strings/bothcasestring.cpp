#include<iostream>
using namespace std;
 
int main()
{
string a;

cout<<"Enter the string:- ";
getline(cin,a);
int hash[52]={0};
 
for (int i = 0; a[i] != '\0'; i++)
{
if(a[i]>='A' && a[i]<='Z')
hash[a[i] - 65 ]++;
else
hash[a[i]-97+26]++;
}
 
for (int i = 0; i<52; i++)
{
if(hash[i]>1)
{
if(i<=26)
cout<<(char)(i+65)<<" "<<hash[i]<<" times"<<endl;
else
cout<<(char)(i+97-26)<<" "<<hash[i]<<" times"<<endl;
}
}
return 0;
}
