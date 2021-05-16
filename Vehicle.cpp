#include <iostream>
using namespace std;
#include "Vehicle.h"
//creating the object with incoming variables
Vehicle::Vehicle(string model, int price, int yearOfProduction){
    this->model = model;
    this->price = price;
    this->yearOfProduction = yearOfProduction;
}
