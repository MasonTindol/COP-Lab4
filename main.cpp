// Testing file

#include "Car.hpp"

int main(void) {
    // Create a Car object
    Car toyota("Toyota", "Corolla", 2020, 23.2, 12); 
    toyota.printInfo();
    toyota.refuel(12.0);
    toyota.drive(53.5);
    toyota.printInfo(); 
    return 0;
}

