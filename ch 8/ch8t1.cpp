/*1. WAP to perform some basic mathematical operations
using Abstract class such like:
- area of circle
- area of triangle
- area of rectangle
- use one single pure virtual function named
calculate() to perform all above operations*/

#include<iostream>
using namespace std;

class circle{
	public :
		virtual void calculate()=0;
};

class triagle{
	public :
		virtual void calculate()=0;
	
};

class rectangle{
	public :
		virtual void calculate()=0;
	
};

class shape : public circle,public triagle,public rectangle
{
	int r,b,h,rh,rw;
	public :
		void calculate()
		{
			cout<<"enter radius of circle";
			cin>>r;
			cout<<"area of circle is :-"<<3.14*r*r<<endl<<endl;
			cout<<"enter height of triangle"<<h;
			cin>>h;
			cout<<"enter base of triangle";
			cin>>b;
			cout<<"area of triangle is"<<h*b/2<<endl<<endl;
			cout<<"enter height of triangle"<<rh;
			cin>>rh;
			cout<<"enter withof rectagle"<<rw;
			cin>>rw;
			cout<<"area of rectangle is"<<rh*rh<<endl<<endl;
		}
};
main()
{
	circle *r=new shape();
	r->calculate();
	
}
