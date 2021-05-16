#include <iostream>
using namespace std;
#include <string>
//Create a Vehicle class
class Vehicle
{
//hidden attributes
private:
  string model;
  int price;
  int yearOfProduction;
// create function
public:
    Vehicle (string model, int price, int yearOfProduction);
};
