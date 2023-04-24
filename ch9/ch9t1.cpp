/*1. WAP to implement exception handling mechanism for
different types of scenarios:
- a number cannot be divide by zero
- a person cannot be able to vote if his/her age is less
than 18
- a password cannot be validate if it doesn’t contains
an uppercase letter*/

#include<iostream>
using namespace std;

main()
{
	string pass; 
	int age,div,flag;
	float a,b;
	cout<<"enter a";
	cin>>a;
	cout<<"enter b";
	cin>>b;
	div=a/b;
	cout<<"enter your age";
	cin>>age;
	cout<<"enter password";
	cin>>pass;
	
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
	
	cout<<"\n\nvoting\n\n";
	
	cout<<"enter your age";
	cin>>age;
	
	try{
		if(age>=18)
		{
			cout<<"you are able to voting";
		}
		else
		{
			throw age;
		}
	}
	catch(...)
	{
		cout<<"your are not able to voting";
	}
	cout<<"enter your password";
	cin>>pass;
	for(int i=0;pass[i]!=NULL;i++)
	{
		if(pass[i]>=65 && pass[i]<=90)
		{
			flag++;
		}
	}
	try{
		if(flag>=1)
		
		{
			cout<<"your password is valid";
		}
		else
		{
			throw flag;
		}
	}
	catch(string pass)
	{
		cout<<"your password is not valid...";
	}
}
