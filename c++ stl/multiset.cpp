#include<iostream>
#include<set>

using namespace std;

int main()
{
	multiset<int> ms;
	
	ms.insert(1);
	ms.insert(1);
	ms.insert(1);
	cout<<ms.empty()<<endl;
	int cnt = ms.count(1);
	
	cout<<cnt<<endl;
	for(auto it = ms.begin();it!=ms.end();it++)
	{
		cout<<*(it)<<" ";
	}
	
	ms.erase(1);//erases all instances of the given number
	cout<<endl<<"The set is :- ";
	for(auto it = ms.begin();it!=ms.end();it++)
	{
		cout<<*(it)<<" ";
	}
	cout<<ms.empty();
	
	ms.insert(2);
	ms.insert(2);
	ms.insert(1);
	ms.insert(1);
	ms.insert(3);
	cout<<endl<<ms.size()<<endl;
	for(auto it = ms.begin();it!=ms.end();it++)
	{
		cout<<*(it)<<" ";
	}
	cout<<endl;
	ms.erase(ms.find(1));
	
	for(auto it = ms.begin();it!=ms.end();it++)
	{
		cout<<*(it)<<" ";
	}
	cout<<endl;
	
//	ms.erase(ms.find(1),ms.find(1) + 1);
	for(auto it = ms.begin();it!=ms.end();it++)
	{
		cout<<*(it)<<" ";
	}
}
