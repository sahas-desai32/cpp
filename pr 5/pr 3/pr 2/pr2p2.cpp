//4. WAP to create a class which Read and Print House details along with Room details.

#include<iostream>
using namespace std;

class detail{
	int n,k,b,h;
	public :
	void getdata()
	{
		cout<<"enter n";
		cin>>n;
		cout<<"enter k";
		cin>>k;
		cout<<"enter b";
		cin>>b;
		cout<<"enter h";
		cin>>h;
	}
	void display()
	{
		cout << n << endl << k << endl << b << endl << h; 
	}
};
int main()
{
	
	detail d;
	d.getdata();
	d.display();
}
