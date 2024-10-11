#include <iostream>

class Complex {
private:
    float real;  // real part
    float imag;  // imaginary part

public:
    Complex();
    Complex(float, float = 0);
    double magnitude() const; // Const correctness for magnitude method
    void print();

    // Declaration of overloaded operators
    friend std::ostream& operator<<(std::ostream& out, const Complex& c);
    friend bool operator<(const Complex& c1, const Complex& c2);
    friend bool operator>(const Complex& c1, const Complex& c2);
};
