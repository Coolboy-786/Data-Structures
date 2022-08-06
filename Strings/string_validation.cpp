#include<iostream>
#include<cstring>
using namespace std;
bool valid(string name)
{
    for(int i=0;name[i]!='\0';i++)
    {
        if(!(name[i]>=65 && name[i]<=90) && !(name[i]>=97 && name[i]<=122) && !(name[i]>=48 && name[i]<=57) && !(name[i]==32))
            return false;
    }
    return true;
}
int main()
{
    string str;
    int n;
    n=str.length();
    
    cout<<"Enter a string:- ";
    getline(cin,str);
    
    if(valid(str))
    cout<<"Valid";
    else
    cout<<"Invalid";
    
}
