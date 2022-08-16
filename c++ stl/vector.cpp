#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v;
	
	for(int i=0;i<5;i++)
	{
		v.push_back(i);
	}
	
	for(auto i=v.begin();i!=v.end();i++)
	{
		cout<<*(i)<<"\t";
	}
	cout<<endl;
	vector<int> v1(5,(2));
	
	for(auto i=v1.begin();i!=v1.end();i++)
	{
		cout<<*(i)<<"\t";
	}
	
	
	vector<pair<int,int>> v2;
	
	v2.push_back({1,2});
	
	v2.emplace_back(1,2);
	
	cout<<endl;
	
	
	vector<int> v3(5,25);
	
	vector<int> v4(v3);
	
	
	vector<int>::iterator it;
	
	for(auto it=v3.begin();it!=v3.end();it++)
	cout<<*(it)<<" ";
	
	cout<<v[4];
}
