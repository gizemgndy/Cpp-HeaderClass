
#include "Shape.h"
#include "Vehicle.h"
#include <iostream>
#include <string>
using namespace std;
//Create a Car class
class Car
{
//hidden attributes
private:
  int Horsepower;
  int maxSpeed;
  string fuelType;
  Shape shape;
  Vehicle vehicle;
// create function
public:
    Car (int Horsepower, int maxSpeed, string fuelType, Shape shape, Vehicle vehicle);
    void carInfo();
};
