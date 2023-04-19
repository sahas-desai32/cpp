#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int calculate(int (*func)(int, int), int a, int b) {
    return func(a, b);
}

int main() {
    int result1 = calculate(add, 4, 2);  // returns 6
    int result2 = calculate(subtract, 4, 2);  // returns 2

    std::cout << "Result1: " << result1 << std::endl;
    std::cout << "Result2: " << result2 << std::endl;

    return 0;
}

