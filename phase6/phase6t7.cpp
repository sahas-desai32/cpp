#include <iostream>

using namespace std;

int main()
{
    const double panelCost = 50000; 
    const double installationCost = 10000; 
    double totalPanels; 
    double totalCost; 
    double governmentAid = 0.3; 

    cout << "Enter the total number of solar panels required: ";
    cin >> totalPanels;

    totalCost = (panelCost * totalPanels) + (installationCost * totalPanels);
    
    totalCost -= totalCost * governmentAid;

    cout << "Total cost of installing solar panels after government aid: " << totalCost << " INR" << endl;

    return 0;
}
