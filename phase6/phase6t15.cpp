#include <iostream>
using namespace std;

class Swap {
public:
    
    Swap(int& a, int& b) : a_(a), b_(b) {}

    void swap() {
        int temp = a_;
        a_ = b_;
        b_ = temp;
    }

    int getA() const {
        return a_;
    }

    int getB() const {
        return b_;
    }

private:
    int& a_;
    int& b_;
};

int main() {
    int x = 5, y = 10;
    cout << "Before swap: x = " << x << ", y = " << y << endl;

    Swap(x, y).swap();

    cout << "After swap: x = " << x << ", y = " << y << endl;

    return 0;
}

