#include<iostream>
#include<set>

using namespace std;

int main()
{
	set<int> s; //decalration of set
	
	s.insert(3);
	
	auto  it = s.find(3);
	cout<<*(it)<<" ";
	
	s.insert(2);
	s.emplace(1);
	
	auto it1 = s.find(1);
	cout<<*(it1)<<' ';
	
	for(auto it2 = s.begin();it2!=s.end();it2++)
	{
		cout<<*(it2)<<" ";
	}
	s.insert(2);
	
	for(auto it2 = s.begin();it2!=s.end();it2++)
	{
		cout<<*(it2)<<" ";
	}
	
	cout<<endl<<s.size();
	
	s.erase(3);
	
	cout<<endl;
	
	for(auto it2 = s.begin();it2!=s.end();it2++)
	{
		cout<<*(it2)<<" ";
	}
	
	auto it4= s.lower_bound(2);
	
	cout<<endl<<*(it4)<<endl;
	
	auto it5 = s.upper_bound(1);
	
	cout<<endl<<*(it5)<<endl;
	
	for(auto it2 = s.begin();it2!=s.end();it2++)
	{
		cout<<*(it2)<<" ";
	}
	
	
}

