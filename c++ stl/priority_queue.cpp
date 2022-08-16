#include<iostream>
#include<queue>

using namespace std;

int main()
{
	priority_queue<int> pq;
	
	pq.push(12);
	pq.push(-1);
	pq.push(1);
	
	cout<<pq.top();
	
	cout<<pq.top()+12;
	
	pq.pop();
	
	cout<<pq.top();
	
	
	cout<<pq.size();
	
	priority_queue<int , vector<int> , greater<int> > pq1;
	
	pq1.push(-1);
	pq1.push(-2);
	pq1.push(3);
	
	cout<<endl<<pq1.top();
	
	pq1.pop();
	
	cout<<endl<<pq1.top();
}
