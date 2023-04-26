
#include <iostream>
using namespace std;

class RBI {
public:
    virtual double getROI() const {
        return 4.0; 
    }
};

class PrivateBank : public RBI {
public:
    double getROI() const override {
        return 5.0; 
    }
};

int main() {
    RBI* rbi = new RBI();
    cout << "ROI for RBI: " << rbi->getROI() << endl;
    delete rbi;

    RBI* privateBank = new PrivateBank();
    cout << "ROI for private bank: " << privateBank->getROI() << endl;
    delete privateBank;

    return 0;
}
