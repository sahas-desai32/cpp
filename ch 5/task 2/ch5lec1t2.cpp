
#include<iostream>
using namespace std;

class student{
	string name;
	int id;
	static int marks;
	string student_class;
	string student_location;
	int student_year;
	
		public:
			void sets(){
				cout<<"enter name of student";
				cin>>name;
				cout<<"enter id of student";
				cin>>id;
				cout<<"enter location of student";
				cin>>student_location;
				cout<<"enter dtudent_year of student";
				cin>>student_year;
				
			}
			void gets(){
					cout<<"the name of student"<<name<<endl;
					cout<<"the id of student"<<id<<endl;
					cout<<"the typr of student location"<<student_location<<endl;
					cout<<"the typr of student_year "<<student_year<<endl;
					
				
			}
		
};
int student :: marks=80;

main(){
    int n,i;
	cout<<"enter number of student";
	cin>>n;
	student s[n];
	
	for(i=0;i<n;i++)
	{
		s[i].sets();
		s[i].gets();
	}
}
