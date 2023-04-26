#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    const int a = 6; 
    const int b = 13; 
    double c; 

    c = sqrt(pow(a, 2) + pow(b, 2));

    cout << "The length of the hypotenuse is " << c << " cm" << endl;

    return 0;
}

