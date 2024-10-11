#include "complex.h"

// Implementation of the << operator
std::ostream& operator<<(std::ostream& out, const Complex& c) {
    if (c.imag)
        out << std::noshowpos << c.real << std::showpos << c.imag << "i";
    else
        out << std::noshowpos << c.real;
    return out;
}

// Overload the < operator
bool operator<(const Complex& c1, const Complex& c2) {
    return c1.magnitude() < c2.magnitude();
}

// Overload the > operator
bool operator>(const Complex& c1, const Complex& c2) {
    return c1.magnitude() > c2.magnitude();
}
