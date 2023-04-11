//5. WAP which illustrates the use of public and private access modifiers.

#include<iostream>
using namespace std;

class home{
	public :
		
		int room;
		int size;
		string colour;
		int garden;
		
		public :
			
			getdata(){
				
				cout <<"enter size of room";
				cin>>room;
				cout <<"enter size of home";
				cin>>size;
				cout <<"enter colour of home";
				cin>>colour;
				cout<<"enter size of garden";
				cin>>garden;
			}
		
};

main()
{
	home h;
	h.getdata();
	
	cout <<"\n\n the area of the home"<<h.room;
	cout <<"there are "<<h.size<<"room in home\n";
	cout <<"the colour of home"<<h.colour<<"\n";
	cout <<"the size of garden"<<h.garden<<"\n";
	}



	
