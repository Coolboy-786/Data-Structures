#include<iostream>
#include<map>

using namespace std;

int main()
{
	map<int,int> mp;
	mp[1]=2;
	//key value pair
	
//	mp.emplace({2,4});
	mp.insert({3,7});
	
	for(auto it: mp)
	{
		cout<<it.first<<' '<<it.second<<endl;
	}
	
	map<pair<int,int>,int> mp1;
	
    auto  it=mp.find(2);
	
}
