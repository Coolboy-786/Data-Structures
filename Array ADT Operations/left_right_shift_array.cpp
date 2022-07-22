// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

struct Array 
{
    int A[10];
    int size;
    int length;
};

void RightShift(struct Array arr)
{
   
    for(int i=arr.length-1;i>0;i--)
    {
        arr.A[i]=arr.A[i-1];
    }
    
    arr.A[0] = 0;
      
    cout<<endl<<"Updated array after right shift:- ";
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<" ";
    }
    
};

void RightRotation(struct Array arr)
{
   int first = arr.A[arr.length-1];
    for(int i=arr.length-1;i>0;i--)
    {
        arr.A[i]=arr.A[i-1];
    }
    
    arr.A[0]=first;
      
    cout<<endl<<"Updated array after right Rotation:- ";
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<" ";
    }
    
};

void LeftShift(struct Array arr)
{

    for(int i=0;i<arr.length-1;i++)
    {
        arr.A[i]=arr.A[i+1];
    }
    int last = arr.length-1;
    arr.A[last]=0;
    cout<<endl<<"Updated array after left shift:- ";
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<" ";
    }
    
}

void leftRotation(struct Array arr)
{
    int last = arr.A[0];
    for(int i=0;i<arr.length-1;i++)
    {
        arr.A[i]=arr.A[i+1];
    }
    
    arr.A[arr.length-1]=last;
    cout<<endl<<"Updated array after Rotation:- ";
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<" ";
    }
    
}



void Display(struct Array arr)
{
    cout<<"Array is:- ";
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
}

int main() {
    // Write C++ code here
    struct Array arr1 = {{8,12,3,6,3,4,9,1,0,6},10,10};
    int opt;
    
    Display(arr1);
    
    cout<<"1)LeftShift\n2)leftRotation\n3)RightShift\n4)RightRotation\n";
    cout<<"Enter your opinion :- ";
    cin>>opt;
    
    
    switch(opt)
    {
        case 1: LeftShift(arr1); break;
        
        case 2: leftRotation(arr1); break;
        
        case 3: RightShift(arr1); break;
        
        case 4: RightRotation(arr1); break;
        
        default: cout<<"chup bey!!";
        
    }

}
