#include<iostream>
using namespace std;

class emp{
		int id;
	char name[20];
	char roll[8];
	int age;
	int salary;
	int exprience;
	char city[5];
	char company_name[10];
	
	public :
		
		input(){
			
			cout<<"enter id of employ";
			cin>>id;
			cout<<"emter name of employ";
			cin>>name;
			cout<<"enter roll of employ";
			cin>>roll;
			cout<<"enter salary of employ";
			cin>>salary;
			cout<<"enter exprience of employ";
			cin>>exprience;
			cout<<"enter city of employ";
			cin>>city;
			cout<<"enter company_name of employ";
			cin>>company_name;
		}
		output(){
			cout<<"the id of employ"<<id<<endl;
			cout<<"the name of employ"<<name<<endl;
			cout<<"the roll of employ"<<roll<<endl;
			cout<<"the salary of employ"<<salary<<endl;
			cout<<"the exprience of employ"<<exprience<<endl;
			cout<<"the city of employ"<<city<<endl;
			cout<<"the company_name of employ"<<company_name<<endl;
		}
	
};

main()

{
	emp e[5];
	int i;
	cout<<"enter information of employ\n\n";
	for(i=0;i<5;i++)
	{
		e[i].input();
	}
	for(i=0;i<5;i++)
	{
		e[i].output();
	}
}




