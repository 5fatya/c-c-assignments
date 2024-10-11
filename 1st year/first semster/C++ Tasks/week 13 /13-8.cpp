#include <iostream>
#include <exception>
#include <stdexcept>
/* CH-230-A
Fatima Fares
 ffares@jacobs-university.de
*/
// Car class
class Car {
public:
    Car() {}
};

// Motor class
class Motor {
public:
    Motor() {
        throw std::runtime_error("This motor has problems");
    }
};

// Garage class
class Garage {
public:
    Car car;
    Motor motor;

    Garage() try : car(), motor() {
    } catch (const std::runtime_error& e) {
        throw std::runtime_error("The car in this garage has problems with the motor");
    }
};

int main() {
    try {
        Garage garage;
    } catch (const std::runtime_error& e) {
        std::cerr << "Caught in main: " << e.what() << std::endl;
    }

    return 0;
}