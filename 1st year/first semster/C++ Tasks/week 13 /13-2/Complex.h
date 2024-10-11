#include <iostream>
#include <fstream>
#include <string>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
class Complex {
public:
    // Constructors
    Complex() : real(0), imag(0) {}
    Complex(double r, double i) : real(r), imag(i) {}

    // Operator overloading
    Complex operator+(const Complex& other) const;
    Complex operator-(const Complex& other) const;
    Complex operator*(const Complex& other) const;
    Complex& operator=(const Complex& other);
    friend std::istream& operator>>(std::istream& is, Complex& c);
    friend std::ostream& operator<<(std::ostream& os, const Complex& c);

private:
    double real;
    double imag;
};

