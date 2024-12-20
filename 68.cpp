#include <iostream>
using namespace std;

class Vehicle
{
public:
    Vehicle()
    { // Constructor
        cout << "This is Vehicle" << endl;
    }

    void display()
    { // Display function in Vehicle class
        cout << "Displaying Vehicle details" << endl;
    }
};

