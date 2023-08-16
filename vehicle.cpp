#include "vehicle.h"
#include <string>
#include <iostream>

using namespace std;


Vehicle::Vehicle(){

}

Vehicle::Vehicle(int range, int odo, int mileage, string color, string manu, string model)
{
    _rangeDistance = range;
    _odometer = odo;
    _color = color;
    _manufacturer = manu;
    _model = model;
    _mileage = mileage;
}

Vehicle::~Vehicle(){
    cout << "Vehicle Destroyed";
}

int Vehicle::getOdometer(){
    return _odometer;
}

int Vehicle::getRangeDistance(){
    return _rangeDistance;
}

int Vehicle::getMileage(){
    return _mileage;
}

string Vehicle::getColor(){
    return _color;
}

string Vehicle::getManufacturer(){
    return _manufacturer;
}

string Vehicle::getModel(){
    return _model;
}

void Vehicle::setRangeDistance(int fuelSize){
    
    if(_mileage == 0){
        cout << "Please set mileage prior to setting the range";
    }
    else{
        _rangeDistance = _mileage * fuelSize;
    }
}

void Vehicle::setOdometer(int odometer){
    _odometer = odometer;
}

void Vehicle::setColor(string color){
    _color = color;
}

