/*1. WAP to find sum of all three number’s cubes by
implementing single level inheritance: Class X->Class Y
- Class X has following members: a, b & c attributes in
integer data type
- Class Y has following members: setData() and
getData() methods*/

#include<iostream>
using namespace std;

class X{
	protected :
	int a,b,c;
	
};

class Y: public X
{
	public:
	void setdata(){
		cout<<"enter a";
		cin>>a;
		cout<<"enter b";
		cin>>b;
		cout<<"enter c";
		cin>>c;
	}
	void getdata(){
		cout<<"cube of"<<a<<" is "<<a*a*a<<endl;
		cout<<"cube of"<<b<<" is "<<b*b*b<<endl;
		cout<<"cube of"<<c<<" is "<<c*c*c<<endl;
		
		cout<<"sum of all integerr is"<<(a*a*a)+(b*b*b)+(c*c*c)<<endl;

	}
	
};

main()
{
	Y y;
	y.setdata();
	y.getdata();
}
	

