#include<iostream>
using namespace std;

int main()
{
	string str;
	cout<<"Enter the string:- ";
	getline(cin,str);
	
	int n=str.length();
	int count=0;
	
	for(int i=0;i<n-1;i++)
	{
		count=1;
		if(str[i]!=-1)
		{
			for(int j=i+1;j<n;j++)
	    	{
			   if(str[i]==str[j] && str[j]!=' ')
			  {
			  	count++;
				str[j]=-1;
				
			  }
	    	}
	    	if(count>1)
	    	{
	    		cout<<"The number of duplicates are " <<count<<" and duplicate is "<<str[i]<<endl;
			}
		}
		
	}
	
	
}
