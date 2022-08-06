#include<iostream>
using namespace std;

void bitwisedup(string str)
{
	long int h=0;
	long int x=0;
	for(int i=0;str[i]!='\0';i++)
	{
		x=1;
		x=x<<(str[i]-'a');
		
		if((x&h)>0)
		{
			cout<<str[i]<<endl;
		}
		else{
			h=x|h;
		}
	}
}

int main()
{
	string str;
	
	cout<<"Enter the string:- ";
	getline(cin,str);
	
	bitwisedup(str);
}


