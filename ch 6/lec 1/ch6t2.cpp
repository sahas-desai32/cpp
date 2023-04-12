/*2. WAP to convert given degree celsius temperature into
fahrenheit and convert that fahrenheit temperature
into kelvin by implementing multilevel inheritance:
Class P -> Class Q -> Class R
- Class P has following members: temperature
attribute in float
- Class Q has following members: toFehrenheit()
method
-Class R has following members: toKelvin() method*/

#include<iostream>
using namespace std;

class P{
	
	protected :
		int t;
		
		public :
			void ask()
			{
				cout <<"enter temperature";
				cin>>t;
			}
};

class Q: public P
{

	protected :
	int f;
	
	public :
	void tofaranheit()
	{
		f=t*1.8+32;
		cout<<"temperature on farenheit "<<f<<endl;
		}	
};

class R :public Q{
	
	protected :
		float k;
		
		public:
			void tokelvin()
			{
				k=(f-32) *5.56+273.15;
				cout<<"temperature in kelvin "<<k<<endl;
			}
		
};

main()
{
	R r;
	r.ask();
	r.tofaranheit();
	cout<<endl;
	r.tokelvin();
	
}
