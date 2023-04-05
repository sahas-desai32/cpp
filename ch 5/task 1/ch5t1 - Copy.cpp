/*1. WAP to get and display 5 Students information using
encapsulation by including below mentioned
attributes:
- stu_id
- stu_name
- stu_age
- stu_course
- stu_email
- stu_city
- stu_college*/

#include<iostream>
using namespace std;

class stud{
	
	int id;
	string name;
	int age;
	string course;
	string email;
	string city;
	string collage;
	
	public :
		
		setter(int id,string name,int age,string course,string email,string city,string collage){
			
			this->id=id;
			this->name=name;
			this->age=age;
			this->course=course;
			this->email=email;
			this->city=city;
			this->collage=collage;
		}
		getter(){
			cout<<"the id of student"<<id<<endl;
			cout<<"the name of student"<<name<<endl;
			cout<<"the age of student"<<age<<endl;
			cout<<"the course of student"<<course<<endl;
			cout<<"the email of student"<<email<<endl;
			cout<<"the city of student"<<city<<endl;
			cout<<"the collage of student"<<collage<<endl;
		}
	
};

main()

{
	int id;
	string name;
	int age;
	string course;
	string email;
	string city;
	string collage;
	
	int i;
	stud s[5];
	for(i=0;i<5;i++)
	{
	
		    cout<<"enter id of student";
			cin>>id;
			cout<<"emter name of student";
			cin>>name;
			cout<<"enter age of student";
			cin>>age;
			cout<<"enter course of student";
			cin>>course;
			cout<<"enter email of student";
			cin>>email;
			cout<<"enter city of student";
			cin>>city;
			cout<<"enter collage of student";
			cin>>collage;
			s[i].setter(id,name,age,course,email,city,collage);
			
			
			
	
	
	}
	
	for(i=0;i<5;i++)
	{
	s[i].getter();
	}

}


