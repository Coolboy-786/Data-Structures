#include<iostream>
#include <unordered_map>
using namespace std;

struct Array {
	int A[20];
	int size;
	int length;
};

void Display(struct Array arr)
{
	cout<<"Array is :- ";
	for(int i=0;i<arr.length;i++)
	{
		cout<<arr.A[i]<<" ";
	}
	cout<<endl;
}

int max(struct Array arr)
{
	int max=0;
	
	for(int i=0;i<arr.length;i++)
	{
		if(max<arr.A[i])
		{
			max=arr.A[i];
		}
	}
	return max;
}

void unsortsumhash(struct Array arr,int k)
{
	int high=max(arr);
	struct Array harr = {{0},high+1,high+1};
	
	
	for(int i=0;i<arr.length;i++)
	{
		if(harr.A[k-arr.A[i]] !=0 && k-arr.A[i] >=0 )
		{
			cout<<arr.A[i]<<" + "<<k-arr.A[i]<<" = "<<k<<endl;
		}
		harr.A[arr.A[i]]++;
	}
}

void bruteforce(struct Array arr,int k)
{
	for(int i=0;i<arr.length-1;i++)
	{
		for(int j=i+1;j<arr.length;j++)
		{
			if(arr.A[i] + arr.A[j] == k)
			{
				cout<<arr.A[i]<<" + "<<arr.A[j]<<" = "<<k<<endl;
			}
		}
	}
}

void findPair(struct Array arr, int n, int target)
{
    // create an empty map
    unordered_map<int, int> map;
 
    // do for each element
    for (int i = 0; i < n; i++)
    {
        // check if pair (nums[i], target - nums[i]) exists
 
        // if the difference is seen before, print the pair
        if (map.find(target - arr.A[i]) != map.end())
        {
            cout << "Pair found (" << arr.A[map[target - arr.A[i]]] << ", "
                 << arr.A[i] << ")\n";
            return;
        }
 
        // store index of the current element in the map
        map[arr.A[i]] = i;
    }
 
    // we reach here if the pair is not found
    cout << "Pair not found";
}

int main()
{
	struct Array arr1={{-4,3,8,10,16,7,5,2,9,14},12,10};
	int k;
	cout<<"Enter the sum of elements:- ";
	cin>>k;
	
	Display(arr1);
	
	unsortsumhash(arr1,k);
	cout<<endl;
	
	bruteforce(arr1,k);
	findPair(arr1,12,12);
}


