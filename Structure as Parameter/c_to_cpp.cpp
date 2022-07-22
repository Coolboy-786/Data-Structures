#include<iostream>
#include<math.h>

using namespace std;

const float pi = 3.141592653589793238;

class Cylinder{
	
	private:
			float radius;
	        float height;
	        
    public: 
     
     // parameterized Constructor
      Cylinder(float r,float h){
	      radius=r;
	      height=h;
    };

    void setradius(float r1)
    {
    	this->radius=r1;
    	
	}
	
	void setheight(float h1)
    {
    	this->height=h1;
	}
	
    double volume()
{
	return pi*pow(radius,2)*height;
};

void ChangeDimensions(float r2,float h2)
{
	radius=r2;
	height=h2;
};
  
      

};

int main()
{
	Cylinder cyl(12,4);
	
    cout<<"volume of the Cylinder is:- "<<cyl.volume();
    
    cyl.ChangeDimensions(24,8);
    
    cout<<"\n New volume of the Cylinder is:- "<<cyl.volume();
    
}
