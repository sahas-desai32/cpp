#include<iostream>
using namespace std;

class A{
	protected :
		int id,exp;
		string name,c_name,role;
		int salary;
		
	public :
		void setA(){
			cout << "enter id : ";
			cin >> id;
			cout << "enter Name : ";
			cin >> name;
			cout << "enter exprience";
			cin>>exp;
			cout<<"enter company name";
			cin>>c_name;
			cout<<"enter role of employee";
			cin>>role;
			cout<<"enter salray of employee";
			cin>>salary;
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
			cout << "name :" << name << endl << "id"<< id; 
			cout << endl << "contact : "<< contact;
			cout<<"company name"<<c_name <<endl << "role" <<role;
				 
		}
};

int main()
{
	C c1;
	c1.setA();
	c1.setB();
	c1.getc();
}
