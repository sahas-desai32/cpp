#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    int id;
    string name;
    int age;
    string course;
    string email;
    string college;

    void registerStudent() {
        cout << "Enter Student ID: ";
        cin >> id;
        cout << "Enter Student Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Student Age: ";
        cin >> age;
        cout << "Enter Student Course: ";
        cin.ignore();
        getline(cin, course);
        cout << "Enter Student Email: ";
        cin >> email;
        cout << "Enter Student College: ";
        cin.ignore();
        getline(cin, college);
    }

    void displayInfo() {
        cout << "Student ID: " << id << endl;
        cout << "Student Name: " << name << endl;
        cout << "Student Age: " << age << endl;
        cout << "Student Course: " << course << endl;
        cout << "Student Email: " << email << endl;
        cout << "Student College: " << college << endl;
    }
};

int main() {
    Student s;
    s.registerStudent();
    cout << endl << "Student Information: " << endl;
    s.displayInfo();
    return 0;
}
