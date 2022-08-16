#include<iostream>
#include<queue>
//FIFO:- First IN First OUT
using namespace std;

int main()
{
	//declaration of queue
	queue<int> q;
	
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	//1 2 3 4
	
	cout<<q.front()+(1*4*6)<<endl;
	
	cout<<q.back()-32;
	
	q.pop();
	cout<<endl<<q.back()<<endl;
	
	cout<<q.front();
}
