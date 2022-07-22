#include<iostream>
#include<math.h>

using namespace std;


const double pi = 3.141592653589793238;

class Frustum{
	
	private:
		
		float radius1;
		float radius2;
		float height1;
		float height2;
		
	public:
		
		//Default Constructor
		Frustum()
		{
			radius1=height1=radius2=height2=1;
		}
		
		//Parameterized Constructor
		Frustum(float r1,float r2,float h1,float h2);
		
		
		//Facillitators
		float slantheight1(); 
		
		float slantheight2();
		
		//Destroyer
		
		~Frustum();
		
		//Accessors
		
		float getradius(){
			cout<<"Radius1 = "<<radius1<<"Radius2 = "<<radius2;
		}
		
		float getheight()
		{
			cout<<"Height1 = "<<height1<<"Height2 = "<<height2;
		}
		
		//Mutators
		void setradius(float r1,float r2)
		{
			radius1=r1;
			radius2=r2;
		}
		
		void setheight(float h1,float h2){
			height1=h1;
			height2=h2;
		}
		
		//Volume
		
		double volume();
		
		// Surface Area of Frustum
		
		double TSA();
};

    Frustum::Frustum(float r1,float r2,float h1,float h2){
			this->radius1=r1;
			this->radius2=r2;
			this->height1=h1;
			this->height2=h2;
		};
		
		
	float Frustum::slantheight1()
		{
			return sqrt(pow(this->radius1,2)+pow(this->height1,2));
		};
		
		
	float Frustum::slantheight2()
		{
			return sqrt(pow(this->radius2,2)+pow(this->height2,2));
		};
		
	Frustum::~Frustum(){
		cout<<"Destroyed in Seconds MF";
	}
	
	double Frustum::volume(){
		return (pi*((pow(radius1,2)*height1)-pow(radius2,2)*height2))/3;
	}
	
	double Frustum::TSA(){
		return pi*(slantheight1()-slantheight2())*(radius1+radius2)+pi*pow(radius1,2)+pi*pow(radius2,2);
	}
	
	int main()
	{
		Frustum f1(12.3,8.6,4.87,3.231);
		
	    float L = f1.slantheight1() - f1.slantheight2();
		
		cout<<"Slant Height of Frustum:- "<<L;
		
		cout<<"\nVolume of Frustum:- "<<f1.volume();
		
		cout<<"\nTotal Surface Area of Frustum :- "<<f1.TSA();
	}
	
	
