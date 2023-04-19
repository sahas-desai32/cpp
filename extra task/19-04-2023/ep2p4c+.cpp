#include<iostream>
using namespace std;

inline void table(int);

int main()
{
	int a;
	cout <<"enter your number";
	cin >>a;
	table(a);
}
inline void table(int a)
{
	int i;
	for(i=1;i<=10;i++)
	{
		cout << a << " * " << i << " = " << a*i << endl;
	}
}
