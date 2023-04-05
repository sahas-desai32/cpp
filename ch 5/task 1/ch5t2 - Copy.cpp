/*2. WAP to get and display 5 Customers
information using encapsulation by including
below mentioned attributes:
- cust_id
- cust_name
- cust_age
- cust_telecome_brand_name (like Jio, Airtel, Vi, etc.)
- cust_mobile_number
- cust_city
- cust_simcard_validity (in years)*/

#include<iostream>
using namespace std;

class stud{
	
	int id;
	string name;
	int age;
	string telicome_brand;
	int mobile_number;
	string city;
	int simcarad_validity;
	
	public :
		
		setter(int id,string name,int age,string telicome_brand,int mobile_number,string city,int simcard_validity){
			
			this->id=id;
			this->name=name;
			this->age=age;
			this->telicome_brand=telicome_brand;
			this->mobile_number=mobile_number;
			this->city=city;
			this->simcrad_validity=simcard_validity;
		}
		getter(){
			cout<<"the id of customer"<<id<<endl;
			cout<<"the name of customer"<<name<<endl;
			cout<<"the age of customer"<<age<<endl;
			cout<<"the telicom_brand of customer"<<telicome_brand<<endl;
			cout<<"the mobile_number of customer"<<mobile_mnumber<<endl;
			cout<<"the city of customer"<<city<<endl;
			cout<<"the simcarad_validity cstomer"<<simcard_validity<<endl
		}
	
};

main()

{
	int id;
	string name;
	int age;
	string telicome_brand;
	int mobile_number;
	string city;
	int simcard_validity;
	
	int i;
	stud s[5];
	for(i=0;i<5;i++)
	{
	
		    cout<<"enter id of customer";
			cin>>id;
			cout<<"emter name of customer";
			cin>>name;
			cout<<"enter age of customer";
			cin>>age;
			cout<<"enter telicome_brand of customer";
			cin>>telicome_brand;
			cout<<"enter mobile_number of customer";
			cin>>mobile_numbere;
			cout<<"enter city of customer";
			cin>>city;
			cout<<"enter simcard_validity of customer";
			cin>>simcard_validity;
			s[i].setter(id,name,age,telicome_brand,mobile_number,city,simcard_validity);
			
			
			
	
	
	}
	
	for(i=0;i<5;i++)
	{
	s[i].getter();
	}

}



