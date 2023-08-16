#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <vector>
/**Base Vehicle Class which will be used to create cars, airplanes and ships*/

class Vehicle{
    public: 
        Vehicle();
        Vehicle(int range, int odo, int mileage ,std::string color, std::string manu, std::string model);
        ~Vehicle();
        int getOdometer();
        int getRangeDistance();
        int getMileage();
        std::string getColor();
        std::string getManufacturer();
        std::string getModel();
        void setRangeDistance(int fuelSize);
        void setOdometer(int);
        void setColor(std::string color);
        virtual std::string getEngineType() = 0;
        virtual void setEngineType(std::string engine);
        

    private:
        int _rangeDistance;
        int _mileage = 0;
        int _odometer = 0 ;
        int _energyStorageSize = 0;
        std::string _color;
        std::string _manufacturer;
        std::string _model;
        std::string _engineType;
};




#endif