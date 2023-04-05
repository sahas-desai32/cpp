#include<iostream>
using namespace std;

class employe{
	string name;
	int id;
	static string roll;
	string employe_department;
	string employe_location;
	int employe_exprience;
	
		public:
			void sets(){
				cout<<"enter name of employe";
				cin>>name;
				cout<<"enter id of employe";
				cin>>id;
				cout<<"enter location of employe";
				cin>>employe_location;
				cout<<"enter employe_year of employe";
				cin>>employe_exprience;
				
			}
			void gete(){
					cout<<"the name of employe"<<name<<endl;
					cout<<"the id of employe"<<id<<endl;
					cout<<"the typr of employe location"<<employe_location<<endl;
					cout<<"the typr of employe_exprience "<<employe_exprience<<endl;
					
				
			}
		
};
string employe :: roll="softwer devlopment";

main(){
    int n,i;
	cout<<"enter number of employe";
	cin>>n;
	employe e[n];
	
	for(i=0;i<n;i++)
	{
		e[i].sets();
		e[i].gete();
	}
}
