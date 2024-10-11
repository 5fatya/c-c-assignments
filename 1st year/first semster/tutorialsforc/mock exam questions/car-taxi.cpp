/* Problem P.15
Language: C++
A car is characterized by a brand name, model name and a price. Write down the class definition for Car. 
Its properties should not be directly accessible.
Implement inline the parametric constructor for setting all properties, 
the destructor and the setter for the model name

Problem P.16 A taxi  
Language: C++
Derive a class Taxi from the class Car you declared in the previous problem.
 A Taxi is a car which has a limit on the number of passengers it may carry. Write the declaration and definition of the class, including the parametric constructor and destructor. It should be possible to specify all properties of a Taxi at object creation. The class Taxi should also provide a print method which prints all properties of a Taxi on the screen. Write also an implementation of the print method. 
The class declaration must be consistent with the one you provided while solving the previous problem
*/


#include <string>
#include <iostream>

class Car {
private:
    std::string brandName;
    std::string modelName;
    double price;

public:
    Car(const std::string& brand, const std::string& model, double priceVal) 
        : brandName(brand), modelName(model), price(priceVal) {}

    ~Car() {}

    void setModelName(const std::string& model) {
        modelName = model;
    }

    // Added getters for Taxi class usage
    std::string getBrandName() const { return brandName; }
    std::string getModelName() const { return modelName; }
    double getPrice() const { return price; }
};
class Taxi : public Car {
private:
    int passengerLimit;

public:
    // Parametric constructor
    Taxi(const std::string& brand, const std::string& model, double price, int passengers)
        : Car(brand, model, price), passengerLimit(passengers) {}

    // Destructor
    ~Taxi() {}

    // Print method to display Taxi properties
    void print() const {
        std::cout << "Brand Name: " << getBrandName() << std::endl;
        std::cout << "Model Name: " << getModelName() << std::endl;
        std::cout << "Price: " << getPrice() << std::endl;
        std::cout << "Passenger Limit: " << passengerLimit << std::endl;
    }
};
int main() {
    Taxi myTaxi("Toyota", "Prius", 25000.0, 4);
    myTaxi.print();
    return 0;
}
