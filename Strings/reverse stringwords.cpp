
#include <iostream>

using namespace std;

int main()
{
    string str;
    cout<<"Enter string:- ";
    getline(cin,str);
    
    int temp=0;
    int i,j;
    int n=str.length();
    for(i=0,j=n-1;i<j;i++,j--)
    {
        temp = str[i];
        str[i]=str[j];
        str[j]=temp;
    }


  cout<<endl<<"Reversed string:- "<<str;
  int begin,end,k=0;
  for(int i=0;i<n;i++)
  {
      if(str[i]==' ' || str[i]=='\0')
      {
          for(begin=k,end=i-1;begin<end;begin++,end--)
          {
              temp = str[begin];
              str[begin]=str[end];
              str[end]=temp;
          }
          k=i+1;
      }
  }
  
  cout<<endl<<str;
    return 0;
}
