#include <iostream>
#include <string>
#include "Car.hpp"

// CONSTRUCTORS
Car::Car() {
    make = "-";
    model = "-";
    year = 1900;
    mpg = 0.0;
    mileage = 0.0;
    fuel_capacity = 0.0;
    fuel_level = 0.0;
}

Car::Car(const std::string& make_, const std::string& model_, int year_, double mpg_, double fuel_capacity_) {
    make = make_;
    model = model_;
    year = year_;
    mpg = mpg_;
    fuel_capacity = fuel_capacity_;
    fuel_level = 0.0;
    mileage = 0.0;
}


// METHODS
void Car::printInfo() const {
    std::cout << "Make\t\t" << make << std::endl;
    std::cout << "Model\t\t" << model << std::endl;
    std::cout << "Year\t\t" << year << std::endl;
    std::cout << "MPG\t\t" << mpg << std::endl;
    std::cout << "Fuel:\t\t" << fuel_level << std::endl;
    std::cout << "Miles:\t\t" << mileage << std::endl;
    std::cout << std::endl;
}

void Car::refuel(double gallons) {
    std::cout << "Refueling...\n";
    std::cout << "Fuel added: " << gallons << " gallons\n";
    double fuel_space = fuel_capacity - fuel_level;
    if(fuel_space < gallons) {
        std::cout << "Excess fuel: " << gallons - fuel_space << " gallons\n";
        fuel_level = fuel_capacity;
    } else
        fuel_level += gallons;
    std::cout << "Fuel level: " << fuel_level << " gallons\n";
    std::cout << std::endl;
}

void Car::drive(double distance) {
    double range = fuel_level * mpg;
    double travel;
    double remain;
    if(distance > range) {
        travel = range;
        remain = distance - travel;
        fuel_level = 0.0;
    } else {
        travel = distance;
        remain = 0.0;
        fuel_level -= distance / mpg;
    }
    mileage += travel;
    std::cout << "Distance covered: " << travel << " miles ("
        << remain << " miles left)\n";
    std::cout << "Fuel level: " << fuel_level << " gallons\n";
    std::cout << std::endl;
}


// GETTERS
std::string Car::getMake() const {
    return make;
};
std::string Car::getModel() const {
    return model;
};
int Car::getYear() const {
    return year;
};
double Car::getMPG() const {
    return mpg;
};
double Car::getMileage() const {
    return mileage;
}; 
double Car::getCapacity() const {
    return fuel_capacity;
}; 
double Car::getLevel() const {
    return fuel_level;
}; 

// SETTERS
void Car::setMake(const std::string& make_) {
    make = make_;
};
void Car::setModel(const std::string& model_) {
    model = model_;
};
void Car::setYear(int year_) {
    year = year_;
};
void Car::setMPG(double mpg_) {
    mpg = mpg_;
};
void Car::setMileage(double mileage_) {
    mileage = mileage_;
};
void Car::setCapacity(double fuel_capacity_) {
    fuel_capacity = fuel_capacity_;
};
void Car::setLevel(double fuel_level_) {
    fuel_level = fuel_level_;
}; 
