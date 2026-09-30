// .hpp header file. Keeps the description of the class. No implementation.
// Inclusion guard
#ifndef CAR_HPP
#define CAR_HPP

#include <string>

class Car {
public:
    // No arg constructor
    Car();
    Car(const std::string& mk, const std::string& mdl, int y, double car_mpg, double car_mileage, double car_capacity, double car_level);

    // printInfo method
    void printInfo() const;

    // add refuel method
    void refuel(double gallons);

    // Getters
    std::string getMake() const;
    std::string getModel() const;
    int         getYear() const;
    double      getMPG() const;
    double      getMileage() const; 
    double      getCapacity() const; 
    double      getLevel() const; 

    // Setters
    void        setMake(const std::string& mk);
    void        setModel(const std::string& md);
    void        setYear(int y);
    void        setMPG(double new_mpg);
    void        setMileage(double car_mileage);
    void        setCapacity(double car_capacity);
    void        setLevel(double car_level); 

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
