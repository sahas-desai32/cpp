//6. WAP to read and print employee information with use of multilevel inheritance. (as like in below image)

#include<iostream>
using namespace std;

class A{
	protected:
		int id,salary,exp;
		string name,role,c_name,add,email,contact;
	public :
		void setA()
		{
			cout << "enter id : ";
			cin >> id;	
			cout << "enter name : ";
			cin >> name;
			cout << "enter role : ";
			cin >> role;
		}
};
class B : public A{
	public :
		void setB()
		{
			
			cout << "enter salary : ";
			cin >> salary;
			cout << "enter exprience : ";
			cin >> exp;
		}
}; 
class C : public B{
	public :
		void setc()
		{
			
			cout << "enter com name : ";
			cin >>c_name ;
			cout << "enter address : ";
			cin >> add;
		}
		void getc()
		{
			cout << "name :" << name << endl;
				 << "role :" << role << endl;
				 << "salary: " << salary << endl;
		}
		
};
class D : public C {
	public :
		void setD()
		{
			
			cout << "enter email: ";
			cin >> email;
			cout << "enter contact : ";
			cin >> contact;
		}
		void getD()
		{
			cout << "id : " << id << endl;
				 << "name :" << name << endl;
				 << "role :" << role << endl;
				 << "salary: " << salary << endl;
				 << "exprience :" << exp << endl;
				 << "com name " << c_name << endl;
				 << "address : " << add << endl;
				 << "email :" << email << endl;
				 << "contact : " << contact << endl;
		}
};

int main()
{
	D a;
	a.setA();
	a.setB();
	a.setc();
	a.getc();
	a.setD();
	a.getD();
}


