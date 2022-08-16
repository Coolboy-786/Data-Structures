#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v1(5,20);
	
	for(auto it: v1)
	{
		cout<<v1.back()<<" ";
	}
	
	
	
	int sum=0,n;
	cout<<endl<<"Enter a number:- ";
	cin>>n;
	
	vector<int> v;
//	cout<<"Entry of the Element in the vector:- ";
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			sum+=i;
			v.push_back(sum);
		}
		
			
	}
	cout<<"Sum of all the factors of a number:- "<<sum<<endl;
	
	cout<<"The vector:- ";
	for(vector<int>::iterator it=v.begin();it!=v.end();it++)
	{
		cout<<*(it)<<" ";
	}
	
	cout<<endl;
	
	cout<<"Removing vector from the 1st  position:- ";
	v.erase(v.begin()+1);//removes the address
	
	for(auto it: v)
	{
		cout<<it<<" ";
	}
	
	cout<<endl;
	
	cout<<"After removing the range of numbers from that position:- ";
	v.erase(v.begin() + 1,v.begin()+3);//removes the elements for this range
	for(auto it: v)
	{
		cout<<it<<" ";
	}
	
	cout<<endl;
	cout<<"Inserting an element at the first position:- ";
	v.insert(v.begin(),25);//inserting a number at the first position
	for(auto it: v)
	{
		cout<<it<<" ";
	}
	cout<<endl;
	//creating a copy vector
	
	vector<int> copy(2,42);
	
	v.insert(v.begin()+1,copy.begin(),copy.end());
	cout<<"Inserting the elements:- ";
	for(auto it: v)
	{
		cout<<it<<" ";
	}
	
	cout<<endl<<" size of the vector :- "<<v.size()<<endl;
	
	v.pop_back();
	cout<<"Removing the last element :- ";
	for(auto it: v)
	{
		cout<<it<<" ";
	}
	
	 vector<int> v3(2,3);
  
  vector<int> v4(3,2);
  
  v3.swap(v4);
  
  cout<<"vector v3:- ";
  for(auto it : v3)
  {
  	cout<<it<<' ';
  }
  
  cout<<" Vector v4:- ";
  for(auto it : v4)
  {
  	cout<<it<<' ';
  }
  
  v4.clear();
  
  
   cout<<endl<<" Vector v4:- ";
  for(auto it : v4)
  {
  	cout<<it<<' ';
  }
  
    
}
