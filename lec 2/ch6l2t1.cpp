/*1. WAP to print rate of interests of different banks using
hierarchical inheritance:
- Class RBI -> Class SBI
- Class RBI -> Class BOB
- Class RBI -> Class ICICI
- inherit rate attribute and getROI() method in all child
classes*/
#include<iostream>
using namespace std;

class RBI{
	protected :
	int rate=6;
	
};

class SBI: public RBI
{
	public:
	void getRIO(){
		cout<<"rate of intrest os sbi"<<rate;
	}
};

class BOB : public RBI

{
	public:
		void getRIO(){
			cout<<"rate of intrest bob"<<rate;
		}
};

class ICICI : public RBI{
	
	public:
		void getRIO(){
			cout<<"rate of intreastr of icici"<<rate;
		}
};
main()
{
	SBI s;
	BOB b;
	ICICI i;
	s.getRIO();
	b.getRIO();
	i.getRIO();
}
