#include<iostream>
using namespace std;

class number{
	protected :
		int a;
	public :
		number()
		{
			cout << "Enter A : ";
			cin >> a;
		}
};

class square  : public number{
	public :
		void getsquare()
		{
			cout << "A : " << a*a;
		}
};
class cube  : public number{
	public :
		void getcube()
		{
			cout << "A : " << a*a*a;
		}
};

int main()
{
	cube c;
	c.getcube();
	cout << endl;
	square s;
	s.getsquare();
}

