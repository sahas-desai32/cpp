#include<iostream>
using namespace std;

class A{
	public :
		virtual void input() = 0;
};

class V : public A
{
	string n;
	public :
		void input()
		{
			cout<<"Enter your name :- ";
			cin>>n;
		}
		void output()
		{
			cout<<"Your name is :- "<<n;
		}
};

main()
{
	V v;
	v.input();
	v.output();
}
