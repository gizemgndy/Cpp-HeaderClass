/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
#include "Shape.h"
#include "Vehicle.h"
#include "Car.h"

int main()
{
    //Creating a shape object
    Shape shape("red",10);
    //Creating a vehicle object
    Vehicle vehicle("model 1",1000,2010);
    //Creating a car object
    Car car(100,350,"diesel",shape,vehicle);
    //The created car information is printing
    car.carInfo();

    return 0;
}
