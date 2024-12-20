// program to demonstrate base class:
#include <iostream>
using namespace std;
class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is Vehicle" << endl;
    }
};
class Car : public Vehicle
{
};
int main()
{
    Car Obj;
    return 0;
}
