#include<iostream>

using namespace std;

class Arithmetic{
	private :
		int x;
		int y;
		
	public :
		Arithmetic(){
			x=y=1;
		}
		
		Arithmetic(int a,int b);
		
	    int getvalues();
	    
	    void setvalues(int a,int b);
	    
	    int add();
	    
	    int sub();
	    
	    int mul();
	    
	    int div();
	    
	    ~Arithmetic();
};

  Arithmetic::Arithmetic(int a,int b){
             	
  	      this->x=a;
  	      this->y=b;
  };
  
  int Arithmetic::getvalues(){
  	    
  	      cout<<"Values of x and y are:- "<<x<<y<<endl;
  };
  
  void Arithmetic::setvalues(int a,int b){
  	      
  	      this->x=a;
  	      this->y=b;
  };
  
  int Arithmetic::add(){
  	     int c;
  	     c=x+y;
  	     return c;
  };
  
  int Arithmetic::sub(){
  	     int c;
  	     c=x-y;
  	     return c;
  };
  
  int Arithmetic::mul(){
  	     int c;
  	     c=x*y;
  	     return c;
  };
  
  int Arithmetic::div(){
  	     int c;
  	     c=x/y;
  	     return c;
  };
  
  Arithmetic::~Arithmetic(){
  	 cout<<"\n oK GOODBYE";
  };
  
  
  int main(){
  	
  	Arithmetic ar(12,87);
  	
  	ar.getvalues();
  	
  	int opt;
  	
  	cout<<" 1)Add \n 2)Subtraction \n 3)Multiplication \n 4)Divison \n";
  	cout<<"Enter the option :- \n";
  	cin>>opt;
  	
     switch(opt)
     {
     	case 1:
     		cout<<"\n Addition is :- "<<ar.add();
     		break;
     		
     	case 2:
     		cout<<"\n Subtraction  is :- "<<ar.sub();
     		break;
     		
     	case 3:
     		cout<<"\n Multiplication  is :- "<<ar.mul();
     		break;
     	
     	case 4:
     		cout<<"\n Division  is :- "<<ar.div();
     		break;
     		
     	Default:
     		cout<<"\n Sorry!! Wrong Choice";
	 }
  	
  	
  	ar.setvalues(32,45);
  	
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
