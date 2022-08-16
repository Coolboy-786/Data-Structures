#include<iostream>
#include<deque>

using namespace std;

int main()
{
	deque<int> dq;
	
	dq.push_back(12);
	
	dq.push_front(-12);
	
	//{-12,12}
	
	for(auto it : dq)
	{
		cout<<it<<" ";	
	}
	
	dq.emplace_back(13);
	
	dq.emplace_front(-13);
	
	for(auto it: dq)
	{
		cout<<it<<" ";
	}
	
	dq.pop_back();
	
	dq.pop_front();
	
	cout<<endl<<dq.size();
	
	for(auto it : dq)
	{
		cout<<it<<" ";
	}
	
	
}
