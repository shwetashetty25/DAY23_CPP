#include <iostream>
using namespace std;
class Vehicle
{
public:
    void display()
    {
        cout << "This is a Vehicle." << endl;
    }
};
class Engine
{
public:
    void display()
    {
        cout << "This is an Engine." << endl;
    }
};
class Car : public Vehicle, public Engine
{
public:
    void display()
    {
        Vehicle::display();
        Engine::display();
        cout << "This is a Car." << endl;
    }
};
int main()
{
    Car myCar;
    myCar.display();
    return 0;
} 