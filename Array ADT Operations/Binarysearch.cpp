#include <iostream>
#include<math.h>

using namespace std;

struct Array {
    int A[15];
    int size;
    int length;
};

void Display(struct Array arr)
{
    cout<<"Array is:- ";
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<" ";
    }
};

int BinSearch(struct Array arr,int key)
{
    int high= arr.length-1;
    int low = 0;
    while(low<=high)
    {
        int mid  = (low+high)/2;
        
        if(key == arr.A[mid])
        {
            return mid;
        }
        else if(key<arr.A[mid])
        {
             high = mid-1;
        }
        else if(key>arr.A[mid])
        {
           
            low = mid+1;
        }
        
    }
    return -1;
}

int RecursiveBinSearch(struct Array arr,int low , int high, int key)
{
    int mid;
    
    if(low<=high)
    {
        mid=(low+high)/2;
        if(key == arr.A[mid])
        {
            return mid;
        }
        else if(key<arr.A[mid])
        {
            return RecursiveBinSearch(arr,low,mid-1,key);
        }
        else if(key>arr.A[mid])
        {
            return RecursiveBinSearch(arr,mid+1,high,key);
        }
    }
    
    return -1;
}

int main() {
    struct Array arr =  {{4,8,10,15,18,21,24,27,29,33,34,37,39,41,43},15,15};
    int k;
    
    Display(arr);
    
    cout<<endl<<"Enter the Element you want to find out in the Array :- ";
    cin>>k;
    
    cout<<"The index of key Element is:- "<<BinSearch(arr,k);
    
    cout<<endl<<"The index of key Element is:- "<<RecursiveBinSearch(arr,0,arr.length,k);

    return 0;
}

