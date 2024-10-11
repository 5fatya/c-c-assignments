#include <iostream>
#include <string>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
class Example {
private:
    std::string data; //how member variables are handled in 
    //constructors (including the copy constructor)

public:
    Example() : data("default") {
        std::cout << "Default constructor called" << std::endl;
    }

    // Parameterized constructor
    Example(const std::string& d) : data(d) {
        std::cout << "Parameterized constructor called" << std::endl;
    }

    // Copy constructor
    Example(const Example& other) : data(other.data) {
        std::cout << "Copy constructor called" << std::endl;
    }

    //wrote a function to print data
    void print() const {
        std::cout << "Data: " << data << std::endl;
    }
};

// wrote a function that takes an object by value
void funcByVal(Example ex) {
    std::cout << "funcByVal called" << std::endl;
    ex.print();
}

// wrote a function that takes an object by reference
void funcByRef(Example& ex) {
    std::cout << "funcByRef called" << std::endl;
    ex.print();
}

int main() {
    // Create objects using different constructors
    Example ex1;
    Example ex2("custom data");

    // Call functions and print results
    funcByVal(ex1);
    funcByRef(ex2);


    return 0;
}
