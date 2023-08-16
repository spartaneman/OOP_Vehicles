#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <vector>

class Vehicle{
    public: 
        Vehicle();
        int getOdometer();
        std::string getColor();
        std::string getManufacturer();
        std::string getModel();
        void setMileage(int mileage);
        void setColor(std::string color);
        virtual std::string getEngineType() = 0;
        
        


    private:
        int rangeDistance;
        int odometer;
        std::string color;
        std::string manufacturer;
        std::string model;
        std::string engineType;
};




#endif