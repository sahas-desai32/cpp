#include <iostream>
#include <string>

using namespace std;

int main() {
    int hour, minute;
    string timePeriod;


    cout << "Enter time in 24-hour format (HH MM): ";
    cin >> hour >> minute;
    
    if (hour > 12) {
        hour -= 12;
        timePeriod = "PM";
    } else {
        timePeriod = "AM";
    }
    if (hour == 0) {
        hour = 12;
    }

    cout << "Time in 12-hour format: " << (hour < 10 ? "0" : "") << hour << ":" << (minute < 10 ? "0" : "") << minute << " " << timePeriod << endl;

    return 0;
}

