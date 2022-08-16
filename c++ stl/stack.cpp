#include<iostream>

#include<stack>

using namespace std;
//LIFO:- LAST IN FIRST OUT
int main()
{
	stack<int> st; //stack declaration
	
	st.push(1);
	st.push(3);
	st.push(5);
	st.push(7);
	//7 5 3 1
	cout<<st.top();
	
	st.pop();
	
	cout<<st.top();
	
	st.pop();
	
	cout<<st.top();
	
	stack<int> st1;
	
	st1.push(2);
	st1.push(4);
	st1.push(6);
	
	//6 4 2
	
	stack<int> st2;
	
	st2.push(1);
	st2.push(3);
	st2.push(5);
	st2.push(7);
	
	//7 5 3 1
	
	st1.swap(st2);
	
	cout<<endl<<st1.top();
	
	cout<<endl<<st2.top();
	
	stack<int> st3;
	st3.push(1);
	if(st3.empty())
	cout<<"stack is empty";
	else{
		cout<<"stack is not empty";
	}
	
	
	
}
