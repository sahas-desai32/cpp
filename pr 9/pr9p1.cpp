//1. WAP to create a class which illustrate the concept of handling all types of exceptions using general exception.

#include<iostream>
using namespace std;
class D{
	public :
		int div,a,b;
	input()
	{
	cout<<"enter a";
	cin>>a;
	cout<<"enter b";
	cin>>b;
	div=a/b;
		
	}
	output(){
	
	cout<<"\n\ndevision\n\n";
	try{
		if(b!=0)
		{
			cout<<"the division of a and b"<<div;
			
		}
		else
		{
			throw div;
		}
	}
	catch(...)
	{
		cout<<" number cannot be divide by zero"<<endl;
	}
}
};

main()
{
	D d;
	d.input();
	d.output();	
}
