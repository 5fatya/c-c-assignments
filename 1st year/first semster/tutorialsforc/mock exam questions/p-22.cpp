/*Problem P.22 Exceptions (2 points) Write a program 
fragment which illustrates the throwing and catching of a logic_error 
while performing a division in the case of division by zero.
*/


#include <iostream>
#include <stdexcept>

// Function to perform division and throw an exception in case of division by zero
double divide(double numerator, double denominator) {
    if (denominator == 0) {
        throw std::logic_error("Division by zero is not allowed.");
    }
    return numerator / denominator;
}

int main() {
    double num = 10.0;
    double denom = 0.0;

    try {
        double result = divide(num, denom);
        std::cout << "Result: " << result << std::endl;
    } catch (const std::logic_error& e) {
        std::cerr << "Caught a logic_error: " << e.what() << std::endl;
    }

    return 0;
}
