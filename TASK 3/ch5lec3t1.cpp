/*1. WAP to create a friend function for two different classes
which performs addition of two times in format of
HH:MM:SS.*/

#include<iostream>
using namespace std;

class A;
class B;
class C;
class A{
	
	int a;
	public:
		void input (){
			cout<<"enter the value of a";
			cin>>a;
		}
		friend void sum(A,B,C);
};

class B {
	int b;
	public :
		void input() {
			cout<<"enter the value of b";
			cin>>b;
		}
		friend void sum(A,B,C);
};

class C {
	int c;
	public :
		void input() {
			cout<<"enter the value of c";
			cin>>c;
		}
		friend void sum(A,B,C);
};

void sum(A h,B m,C s){
	
	int HH,MM,SS;
	HH=h.a;
    MM=m.b;
    SS=s.c;
	
	while(SS>=60)
	{
		SS-=60;
		MM++;
	}
	while(MM>=60)
	{
		MM-=60;
		HH++;
	}
cout<<"HH:MM:SS"<<HH<<":"<<MM<<":"<<SS;

	
}

main (){
	A h;
	B m;
	C s;
	h.input();
	m.input();
	s.input();
	
	sum(h,m,s);
}



