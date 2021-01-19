#include <iostream>
#include <iomanip>
using namespace std;

void homework1()
{
    //int main(){


    //declare variables
    float width, length, area, maintCost, totalPumpkinVolume, transportCost, grossProfit, netProfit;
    int pumpkinsPerWidth, pumpkinsPerLength, totalPumpkins, totalTrips = 0;
    const int trailerVol = 8 * 14 * 6;
    const float pi = 3.14;
    const int pumpkinSpace = 4;

    //Get user input for length and width
    cout << "Enter Width:";
    cin >> width;
    cout << "Enter Length:";
    cin >> length;
    cout << endl;

    //Calculate area and print to screen
    area = length * width;
    cout << "The area of the farm is: " << area << " sq ft" << endl;

    //Calculate cost and print
    maintCost = area * 0.06;
    cout << "The farm's maintenance cost is: $" << fixed << setprecision(2) << maintCost << endl;

    //Calculate pumpkins that can fit
    pumpkinsPerLength = length / pumpkinSpace;
    pumpkinsPerWidth = width / pumpkinSpace;
    totalPumpkins = pumpkinsPerLength * pumpkinsPerWidth;
    cout << "The farm's pumpkin capacity is: " << totalPumpkins << endl << endl;

    //Calculate total area of pumpkins and print to screen
    totalPumpkinVolume = (4.0/3) * pi * totalPumpkins;
    cout << "The volume of all the pumpkins combined will be: " << fixed << setprecision(2) << totalPumpkinVolume << " cu ft" << endl;

    //Calculate total trips and print to screen
    totalTrips = (totalPumpkinVolume / trailerVol) + 0.5;
    cout << "The total number of trips to the market will be: " << totalTrips << endl;

    //Calculate transportation cost and print to screen
    transportCost = 33.63 * totalTrips;
    cout << "The transportation cost will be: $" << fixed << setprecision(2) << transportCost << endl;

    //Calculate gross profit and print to screen
    grossProfit = totalPumpkins * 5.25;
    cout << "The farmer's gross profit will be: $" << fixed << setprecision(2) << grossProfit << endl << endl;

    //Calculate net profit and print to screen
    netProfit = grossProfit - maintCost - transportCost;
    cout << "The net profit will be: $" << fixed << setprecision(2) << netProfit << endl;

    //return 0;
    //}
}

int main() {
    homework1();

    return 0;
}
