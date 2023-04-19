/*3. WAP with a mother class animal. Inside it define a name and an age variables, and set_value() function. 
Then create two bases class Zebra and Dolphin which write a message telling the age, 
the name and giving some extra information (e.g. place of origin).*/

#include<iostream>
using namespace std;

class animal{
	protected:
		int age;                                                                                                                                                                                                                                                                         
		string name;
	public :
		void setan()
		{
			cout << "enter age of animal : ";
			cin >> age;
			cout << "enter Nmae of animal : ";
			cin >> name;
		}
};
class zebra : public animal{
	protected:
		string place;
	public :
		void setze()
		{
			cout << "enter place : ";
			cin >> place;
		}
		void getze()
		{
			cout<< "nmae :" << name << endl;
			cout<< "age  :" << age  << endl;
			cout<< "place:" << place << endl;
		}

	
};
class dolphin : public animal{
	protected:
		string col;
	public :
		void setdo()
		{
			cout << "enter colour : ";
			cin >> col;
		}
		void getdo()
		{
			cout<< "name  :" << name << endl;
			cout<< "age   :" << age  << endl;
			cout<< "colour:" << col << endl;
		}	
};
int main()
{
	zebra z;
	z.setan();
	z.setze();
	z.getze();
	
	cout << endl;
	
	dolphin d;
	d.setan();
	d.setdo();
	d.getdo();
}
