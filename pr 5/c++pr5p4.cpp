//4. WAP to read and print employee information using multiple inheritance.

#include<iostream>
using namespace std;

class A{
	protected :
		int id;
		string name;
	public :
		void setA(){
			cout << "enter id : ";
			cin >> id;
			cout << "enter Name : ";
			cin >> name;
		}
};
class B{
	protected :
		string contact;
	public :
		void setB(){
			cout << "enter contact : ";
			cin >> contact;
		}
};
class C : public A,public B{
	public :
		void getc()
		{
			cout << "name :" << name << endl << "id :" 
				 << id << endl << "contact : "<< contact;
		}
};

int main()
{
	C c1;
	c1.setA();
	c1.setB();
	c1.getc();
}
