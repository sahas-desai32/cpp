#include <iostream>


using namespace std;

class Counter {
    private:
        int value;

    public:
        Counter() {
            value = 0;
        }

        void increment() {
            value++;
        }

        void decrement() {
            value--;
        }

        void display() {
            cout << "Counter Value: " << value << endl;
        }
};

int main() {
    Counter c;

    char key;
    while (true) {
        if (kbhit()) {
            key = getch();
            if (key == 72) { // UP Arrow key
                c.increment();
                c.display();
            }
            else if (key == 80) { // DOWN Arrow key
                c.decrement();
                c.display();
            }
        }
    }

    return 0;
}
