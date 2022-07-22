#include<iostream>

using namespace std;

template<class T>



class Arithmetic{
	private :
	    T x;
		T y;
		
	public :
		Arithmetic(){
			x=y=1;
		}
		
		Arithmetic(T a,T b);
		
	    T getvalues();
	    
	    T setvalues(T a,T b);
	    
	    T add();
	    
	    T sub();
	    
	    T mul();
	    
	    T div();
	    
	    ~Arithmetic();
};

template<class T>



  Arithmetic<T>::Arithmetic(T a,T b){
             	
  	      this->x=a;
  	      this->y=b;
  };
  
  template<class T>
  
  T Arithmetic<T>::getvalues(){
  	    
  	      cout<<"Values of x and y are:- "<<x<<y<<endl;
  };
  
  template<class T>
  
  T Arithmetic<T>::setvalues(T a,T b){
  	      
  	      this->x=a;
  	      this->y=b;
  };
  
  template<class T>
  T Arithmetic<T>::add(){
  	     T c;
  	     c=x+y;
  	     return c;
  };
  
  template<class T>
  
  T Arithmetic<T>::sub(){
  	     T c;
  	     c=x-y;
  	     return c;
  };
  
  template<class T>
  
  T Arithmetic<T>::mul(){
  	     T c;
  	     c=x*y;
  	     return c;
  };
  
  template<class T>
  
  T Arithmetic<T>::div(){
  	     T c;
  	     c=x/y;
  	     return c;
  };
  
  template<class T>
  
  Arithmetic<T>::~Arithmetic(){
  	 cout<<"\n oK GOODBYE";
  };
  
  
  int main(){
  	
  	Arithmetic <int> ar1(12,87);
  	
  	ar1.getvalues();
  	
  	int opt;
  	
  	cout<<" 1)Add \n 2)Subtraction \n 3)Multiplication \n 4)Divison \n";
  	cout<<"Enter the option :- \n";
  	cin>>opt;
  	
     switch(opt)
     {
     	case 1:
     		cout<<"\n Addition is :- "<<ar1.add();
     		break;
     		
     	case 2:
     		cout<<"\n Subtraction  is :- "<<ar1.sub();
     		break;
     		
     	case 3:
     		cout<<"\n Multiplication  is :- "<<ar1.mul();
     		break;
     	
     	case 4:
     		cout<<"\n Division  is :- "<<ar1.div();
     		break;
     		
     	Default:
     		cout<<"\n Sorry!! Wrong Choice";
	 }
  	
  	
  	Arithmetic <float> ar(23.76,71.81);
  	
  	switch(opt)
     {
     	case 1:
     		cout<<"\n Addition  is :- "<<ar.add();
     		break;
     		
     	case 2:
     		cout<<"\n Subtraction  is :- "<<ar.sub();
     		break;
     		
     	case 3:
     		cout<<"\n Multiplication is :- "<<ar.mul();
     		break;
     	
     	case 4:
     		cout<<"\n Division is :- "<<ar.div();
     		break;
     		
     	
	 }
  	
  }
