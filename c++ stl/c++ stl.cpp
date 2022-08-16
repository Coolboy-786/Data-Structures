#include<bits/stdc++.h>

using namespace std;

int main()
{
	pair<int,int> s = {1,12};
	
	cout<<s.first<<" "<<s.second<<endl;
	
	//nested pairs 
	
	pair<int,pair<int,int>> x = {1,{-4,7}};
	
	cout<<"{"<<x.first<<",{"<<x.second.second<<","<<x.second.first<<"}}"<<endl;
	
	
	pair<float,float> arr1[6]={{1,2},{3,4},{5,6},{7,8},{9,10},{-1,-2}};
	
	
	
	for(int i=0;i<6;i++)
	{
	    cout<<"{"<<arr1[i].first<<","<<arr1[i].second<<"}"<<endl;
	}
}
