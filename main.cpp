#include <iostream>
#include <iomanip>
using namespace std;

void homework1()
{
    //int main(){

    //declare variables
    float width, length, area, cost, totalPumpkinVolume;
    int pumpkinsPerWidth, pumpkinsPerLength, totalPumpkins = 0;

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
    cost = area * 0.06;
    cout << "The farm's maintenance cost is: $" << fixed << setprecision(2) << cost << endl;

    //Calculate pumpkins that can fit
    pumpkinsPerLength = length / 4;
    pumpkinsPerWidth = width / 4;
    totalPumpkins = pumpkinsPerLength * pumpkinsPerWidth;
    cout << "The farm's pumpkin capacity is: " << totalPumpkins << endl << endl;

    //Calculate total area of pumpkins and print to screen
    totalPumpkinVolume = (4.0/3) * 3.14 * totalPumpkins;
    cout << "The volume of all the pumpkins is: " << fixed << setprecision(2) << totalPumpkinVolume << " cu ft" << endl;


    //return 0;
    //}
}

int main() {
    homework1();
    return 0;
}
