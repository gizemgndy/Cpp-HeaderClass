#include <iostream>
using namespace std;
#include "Car.h"
//creating the object with incoming variables
Car::Car(int Horsepower, int maxSpeed, string fuelType, Shape shape, Vehicle vehicle){
    this->Horsepower= Horsepower;
    this->maxSpeed = maxSpeed;
    this->fuelType = fuelType;
    this->shape = shape;
    this->vehicle = vehicle;
}

//function to print all vehicle information
void Car::carInfo() {
		cout<<"Color is: "<<shape.color<<", numberOfDors is: "<<shape.numberOfDors<<endl;
		cout<<"Model is: "<<vehicle.model<<", price is: "<<vehicle.price<<endl;
		cout<<"Horsepower is: "<<Horsepower<<", MaxSpeed is: "<<maxSpeed<<endl;
}

