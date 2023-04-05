//4. WAP to illustrate the use of inline function by creating a function which prints a multiplication table of given number

#include<iostream>
using namespace std;

inline void table(int);

int main()
	int a;
{
	cout <<"enter your number";
	cin >>a;
	table(a);
}
{
	int i;
	for(i=1;i<=10;i++)
	{
		cout << a << " * " << i << " = " << a*i << endl;
	}
}
inline void table(int a)
