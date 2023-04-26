#include <iostream>
using namespace std;

int main() {
    const int initialSales = 123500; 
    const double initialRevenue = 78000.0; 


    const int numMonths = 3;
    const int totalSales = initialSales * 10 * numMonths;
    const double totalRevenue = initialRevenue * 10 * numMonths;
    const double revenueIncrement = ((totalRevenue - initialRevenue) / initialRevenue) * 100.0;

    cout << "Total sales in " << numMonths << " months: " << totalSales << endl;
    cout << "Total revenue in " << numMonths << " months: " << totalRevenue << " INR" << endl;
    cout << "Revenue increment percentage: " << revenueIncrement << " times" << endl;

    return 0;
}

