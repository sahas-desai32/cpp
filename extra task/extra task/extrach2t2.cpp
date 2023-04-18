#include<iostream>
using namespace std;

void mod()
{
	int a,b,mod;
	cout<<"enter a";
	cin>>a;
	cout<<"enter b";
	cin>>b;
	cout<<"enter mod %d"<<a%b;
	
	
	
}
void sum()
{
	int a,b,sum
	cout<<"enter a";
	cin>>a;
	cout<<"enter b";
	cin>>b;
	
	cout<<"sum is%d"<<a+b;
}

void multy
{
	int a,b,multy
	cout<<"enter a";
	cin>>a;
	couit<<"enter b";
	cin>>b;
	
	cout<<"multy is%d"<<a*b;

	
}
void div
{
	int a,b,div;
	cout<<"enter a";
	cin>>a;
	cout<<"enter b";
	cin>>b;
	
	cout<<"div is%d"<<a/b;
}
void miynes
{
	int a,b,miynes;
	cout<<"enter a";
	cin>>a;
	cout<<"enter b";
	cin<<b;
	
	cout<<"miynes is"<<a-b;
}
main()
{
	int n=1;
	
	while(n!=0)
	{
		cout<<"press 1 for mod\n";
		cout<<"press 2 for sum\n";
		cout<<"press 3 for multy\n";
		cout<<"press 4 for div\n";
		cout<<"press 5t for miynes\n";
		
		cout<<"enter your choice";
		cin<<n;
		switch(n)
		{
		
		case 1:
			mod();
			break;
			
		case 2:
		 	sum();
			break;
			
		case 3:
			multy();
			break;
			
		case 4:
			div();
			break;
			
		case 5:
			miynes();
			break;
			
			default:
			cout<<"invalid choice";
			break;
				
	}

	

}
	

