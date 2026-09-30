#ifndef CAR_HPP
#define CAR_HPP

#include <string>

class Car {
public:
    // No arg constructor
    Car();
    Car(const std::string& make_, const std::string& model_, int year_, double mpg_, double fuel_capacity_);

    // printInfo method
    void printInfo() const;

    // add refuel method
    void refuel(double gallons);
    
    // add drive method
    void drive(double distance);

    // Getters
    std::string getMake() const;
    std::string getModel() const;
    int         getYear() const;
    double      getMPG() const;
    double      getMileage() const; 
    double      getCapacity() const; 
    double      getLevel() const; 

    // Setters
    void        setMake(const std::string& make_);
    void        setModel(const std::string& model_);
    void        setYear(int year_);
    void        setMPG(double mpg_);
    void        setMileage(double mileage_);
    void        setCapacity(double fuel_capacity_);
    void        setLevel(double fuel_level_); 

private:
    std::string make;
    std::string model;
    int year;
    double mpg;
    double mileage; 
    double fuel_capacity;
    double fuel_level; 
};

#endif
