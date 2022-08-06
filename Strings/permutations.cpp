#include<iostream>
using namespace std;

void swap(char *s1,char *s2)
{
	char temp;
	
	temp=*s1;
	*s1=*s2;
	*s2=temp;
}

void prem1(char s[],int k)
{
	static int a[100]={0};
	static char res[100];
	
	int i;
	if(s[k]=='\0')
	{
		res[k]='\0';
		cout<<res<<endl;
	}
	else{
		for(int i=0;s[i]!='\0';i++)
		{
			if(a[i]==0)
			{
				res[k]=s[i];
				a[i]=1;
				prem1(s,k+1);
				a[i]=0;
			}
		}
	}
}

void prem2(char s[],int low,int high)
{
	int i;
	if(low==high)
	{
		cout<<s<<endl;
	}
	else{
		for(i=low;i<=high;i++)
		{
			swap(&s[low],&s[i]);
			prem2(s,low+1,high);
			swap(&s[low],&s[i]);
		}
	}
}

int main()
{
	char s[6];
	string str;
	cout<<"Enter the string:- ";
	getline(cin,str);
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		s[i]=str[i];
	}
	s[i]='\0';
	
	cout<<"All the permutations of the string are:- ";
	prem1(s,0);
	
	cout<<endl<<"All the permutations of the string are:- ";
	prem2(s,0,str.length()-1);
}
