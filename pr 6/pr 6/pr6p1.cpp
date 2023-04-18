/*1. WAP to create a Message class with a constructor that takes a single string with a default value.
 Create a private member string, and in the constructor simply assign the argument string to your internal string. 
 Create two overloaded member functions called print( ): 
 one that takes no arguments and simply prints the message stored in the object, and one that takes a string argument, 
 which it prints in addition to the internal message.
*/

#include<iostream>
using namespace std;

class Message{
	private :
		string message;
	public :
		Message()
		{
			cout << "Enter message: ";
			cin >> message;
		}
		void print()
		{
			cout << message << endl;
		}
		void print(string n)
		{
			cout << message  << " " << n << endl;
		}
};

int main()
{
	Message m;
	m.print();
	m.print("by..");
}
