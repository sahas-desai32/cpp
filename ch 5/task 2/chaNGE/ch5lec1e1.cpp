#include<iostream>
using namespace std;

class Employees{
	string name;
	int id;
	static string roll;
	string Employees_department;
	string Employees_location;
	int Employees_exprience;
	
		public:
			void sets(){
				cout<<"enter name of Employees";
				cin>>name;
				cout<<"enter id of Employees";
				cin>>id;
				cout<<"enter location of Employees";
				cin>>Employees_location;
				cout<<"enter Employees_year of Employees";
				cin>>Employees_exprience;
				
			}
			void gete(){
					cout<<"the name of Employees"<<name<<endl;
					cout<<"the id of Employees"<<id<<endl;
					cout<<"the typr of Employees_location"<<Employees_location<<endl;
					cout<<"the typr of Employees_exprience "<<Employees_exprience<<endl;
					
				
			}
		
};
string Employees :: roll="softwer devlopment";

main(){
    int n,i;
	cout<<"enter number of Employees";
	cin>>n;
	Employees e[n];
	
	for(i=0;i<n;i++)
	{
		e[i].sets();
		e[i].gete();
	}
}
