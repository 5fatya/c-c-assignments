#include <iostream>
#include <exception>
#include <stdexcept>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
// Custom exception class derived from std::exception
class OwnException : public std::exception {
public:
    const char* what() const noexcept override {
        return "OwnException\n";
    }
};

// Function to check an integer value and throw an exception based on the value
void checkInt(int value) {
    if (value == 1) {
        throw 'a';
    } else if (value == 2) {
        throw 12;
    } else if (value == 3) {
        throw true;
    } else {
        throw OwnException();
    }
}

int main() {
    try {
        checkInt(1);
    } catch (char c) {
        std::cerr << "Caught in main: " << c << std::endl;
    }

    try {
        checkInt(2);
    } catch (int i) {
        std::cerr << "Caught in main: " << i << std::endl;
    }

    try {
        checkInt(3);
    } catch (bool b) {
        std::cerr << "Caught in main: " << b << std::endl;
    }

    try {
        checkInt(4);
    } catch (OwnException& e) {
        std::cerr << "Caught in main: " << e.what() << std::endl;
    }

    return 0;
}