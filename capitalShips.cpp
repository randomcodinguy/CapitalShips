#include<iostream>
using namespace std;

class capitalShips{
int engineCount;
int weight;
int maxThrust;
int crewCapacity;
char admiralName[50];
char shipSerialNumber;

public:
    capitalShips(){
        cout << "Enter the name of the admiral: ";
        cin.getline(admiralName, 50);

        cout << "Enter the serial number of the ship: ";
        cin >> shipSerialNumber;
    }



};



int main(){
    capitalShips c1;

    return 0;
}