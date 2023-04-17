/*1. WAP to make Railway Reservation System.
Requirements:
(A) User Input Train Number , Train Name , Source , Destination , Train Time.
(B) Display Record By Search Train Number.
(C) Minimum 3 Input Train Record.*/


#include<iostream>
using namespace std;

class employe{
	private :
		int t_number,t_time;
		string t_name,source,destination;
	public :
		void setdata()
		{
			cout << "train number : ";
			cin >> t_number;
			cout << "Enter train name : ";
			cin >> t_name;
			cout << "Enter train time : ";
			cin >> t_time;
			cout << "Enter source : ";
			cin >> source;
			cout << "Enter destination : ";
			cin >> destination;
		
		}
		void getdata()
		{
			cout << "train number : " << t_number << endl;
			cout << "train name : " << t_name << endl;
			cout << "train time : " << t_time << endl;
			cout << "source : " << source << endl;
			cout << "destination: " << destination << endl;
		
		}		

};

int main()
{
	employe e[5];

	for(int i=0;i<5;i++) e[i].setdata();
	for(int i=0;i<5;i++) e[i].getdata();
}
