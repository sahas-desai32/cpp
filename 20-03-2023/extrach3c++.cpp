#include<iostream>
using namespace std;
 class car{
	
	int id;
	char company_name[20];
	char colour[10];
	char model[30];
	int release_year;
	
	public :
		
		input(){
			cout<<"enter id of car";
			cin>>id;
			cout<<"emter company_name of car";
			cin>>company_name;
			cout<<"enter colour of car";
			cin>>colour;
			cout<<"enter model of car";
			cin>>model;
			cout<<"enter release_year of employ";
			cin>>release_year;
		}
		output(){
			cout<<"the id of car"<<id<<endl;
			cout<<"the company_name of car"<<company_name<<endl;
			cout<<"the colour of employ"<<colour<<endl;
			cout<<"the modeal of employ"<<model<<endl;
			cout<<"the release_year of employ"<<release_year<<endl;
		}
	
	
};

	
		main()

{
	car r[5];
	int i;
	cout<<"enter information of car\n\n";
	for(i=0;i<5;i++)
	{
		r[i].input();
	}
	for(i=0;i<5;i++)
	{
		r[i].output();
	}
}
	
