#include<iostream>
#include<list>

using namespace std;

int main()
{
	//declaration of lists
	list<int> ls;
	
	ls.push_back(2);
	ls.emplace_back(4);
	
	for(auto it: ls)
	{
		cout<<it<<" ";
	}
	
	ls.pop_front();
	
	ls.push_front(12);
	
	ls.emplace_front(23);
	cout<<endl;
	for(auto it: ls)
	{
		cout<<it<<" ";
	}
	
	cout<<endl<<ls.size();
	
	//rest of the things are same as vectors
}
