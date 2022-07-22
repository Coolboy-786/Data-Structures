// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
struct Array{
    int A[20];
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
    cout<<endl;
}

void Duplicates(struct Array arr)
{
    int lastDuplicate = 0;
    int count = 0;
    int j=0;
    
    for(int i=0;i<arr.length-1;i++)
    {
        
        if(arr.A[i]==arr.A[i+1] )
        {
            j=i+1;
            while(arr.A[j]==arr.A[i])
            {
                j++;
            }
            cout<<"Duplicates is:- "<< arr.A[i]<<endl;
            cout<<"Number of duplicates of "<<arr.A[i]<<" is :- "<<j-i<<endl; 
            if(arr.A[i]!=lastDuplicate)
            {
            
              lastDuplicate=arr.A [i];
              cout<<lastDuplicate<<" at position "<<i<<" to "<<j-1<<endl;
            }
          i=j-1;
        }
    }
    
    // cout<<endl<<"Number of Duplicates are:- "<<count;
    
    
}

int main() {
    
    struct Array arr={{3,6,8,8,10,12,15,15,15,20},12,10};
    Display(arr);
    Duplicates(arr);

    return 0;
}
