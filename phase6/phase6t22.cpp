#include <iostream>
using namespace std;

int main() {
    double a, b, c; 

    cout << "Enter the lengths of the sides of the triangle: ";
    cin >> a >> b >> c;


    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "The given sides do not form a triangle." << endl;
        return 0;
    }

    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);

    if (a*a + b*b > c*c) {
        cout << "The given triangle is acute." << endl;
    } else if (a*a + b*b == c*c) {
        cout << "The given triangle is right." << endl;
    } else {
        cout << "The given triangle is obtuse." << endl;
    }

    return 0;
}

