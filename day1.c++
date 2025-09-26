
#include <iostream>
#include <string>
using namespace std;

// vehicle is a abstract class and we can't make object of this and base class which implement this abstarct class has tiom implement the parebt functions
// IF they are virtual

// ENCAPSULATION MEANS YOU DON'T know the INNER data HOW IT WORKS JUST LIKE A WEBSITE YOU INTERACT WITH FRONTEND BUT DONT KNOW HOW FUNCTIONING IT IS
//  in simple language how data is protected and accessed is all encapsulation
// ABSTRACTION MEANS HIDE THE INNER WORKING ONLY SHOW THE OUTER THINGS

// THIS IS A ABSTARCT CLASS

class Vehicle
{
public:
    virtual int Highspeed() = 0;
    virtual int wheel() = 0;
    virtual int averageSpeed() = 0; // = 0 is used for defining the pure virtual functions 
    virtual void VehicleType() = 0;
    virtual int fuelCapacity() = 0;
    virtual int mileage() = 0;
    virtual string fuelType() = 0;
    virtual void displayInfo() = 0;
};

class BMW : public Vehicle
{
private:
    string name;
    int speed;
    int averagespeed;
    int fuelcapacity;
    string vehicletype;
    int milage;
    string fueltype;
    int noofwheels;

public:
    BMW(int s, int averages, int fuelcap, int mil, string fueltt, string type, int wheels, string naam)
    {
        this->averagespeed = averages;
        this->speed = s;
        this->fuelcapacity = fuelcap;
        this->milage = mil;
        this->fueltype = fueltt;
        this->vehicletype = type;
        this->noofwheels = wheels;
        this->name = naam;
    }

    int Highspeed() override { return speed; }
    int wheel() override { return noofwheels; }
    int averageSpeed() override { return averagespeed; }
    void VehicleType() override {}
    string fuelType() override { return fueltype; }
    int fuelCapacity() override { return fuelcapacity; }
    int mileage() override { return milage; }
    void displayInfo() override
    {
        cout << "Vehicle Name : " << name << endl
             << "Type of Vehicle " << vehicletype << endl
             << "high speed is " << speed << endl
             << "mielage of vehicle " << milage << endl
             << "average speed of vehicle " << averagespeed << endl
             << "fuel capacity of vehicle " << fuelcapacity << endl
             << "fueltype " << fueltype << endl
             << "wheels " << noofwheels << endl;
    }
};

int main()
{
    BMW *car = new BMW(400, 150, 400, 24, "diesel", "Car", 4, "BMW"); // HERE YOU ONLY DEFIN OBJECT BUT DONT KNOW INNER IMPLEMENTATION

    car->displayInfo();
    return 0;
}