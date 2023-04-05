/*1. WAP to get and display N numbers of Hotels and static
information using encapsulation with array of objects
member by including below mentioned attributes:
- hotel_id
- hotel_name
- hotel_type (like hotel or motel)
- hotel_rating (like 1 Star, 2 Start, ..., 7 Star)
- hotel_location (city name)
- hotel_establish_year
- hotel_staff_quantity
- hotel_room_quantity*/
#include<iostream>
using namespace std;

class hotel{
	string name;
	int id;
	static string rating;
	string hotel_type;
	string hotel_location;
	int hotel_eatablish_year;
	int hotel_staff_quantity;
	int hotel_romm_quantity;
	
		public:
			void seth(){
				cout<<"enter name of hotel";
				cin>>name;
				cout<<"enter id of hotel";
				cin>>id;
				cout<<"enter type of hotel";
				cin>>hotel_type;
				cout<<"enter location of hotel";
				cin>>hotel_location;
				cout<<"enter eastablish_year of hotel";
				cin>>hotel_eatablish_year;
				cout<<"enter staff_quntity of hotel";
				cin>>hotel_staff_quantity;
				cout<<"enter room_quntity of hotel";
				cin>>hotel_romm_quantity;
			}
			void geth(){
					cout<<"the name of hotel"<<name<<endl;
					cout<<"the id of hotel"<<id<<endl;
					cout<<"the type of hotel"<<hotel_type;
					cout<<"the typr of hotel location"<<hotel_location<<endl;
					cout<<"the typr of hotel eastablish_year "<<hotel_eatablish_year<<endl;
					cout<<"the type of hotel staff_quantity"<<hotel_staff_quantity<<endl;
					cout<<"enter room_quntity of hotel"<<hotel_romm_quantity<<endl;
					
				
			}
		
};
string hotel :: rating="7 star";

main(){
	int n,i;
	cout<<"enter number of hotel";
	cin>>n;
	hotel h[n];
	
	for(i=0;i<n;i++)
	{
		h[i].seth();
		h[i].geth();
	
	}
}
