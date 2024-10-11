#include "Complex.h"
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
int main() {
    std::ifstream in1("in1.txt");
    std::ifstream in2("in2.txt");
    std::ofstream out("output.txt");

    Complex c1, c2, sum, diff, product;

    in1 >> c1;
    in2 >> c2;

    sum = c1 + c2;
    diff = c1 - c2;
    product = c1 * c2;

    out << "Sum: " << sum << std::endl;
    out << "Difference: " << diff << std::endl;
    out << "Product: " << product << std::endl;

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << diff << std::endl;
    std::cout << "Product: " << product << std::endl;

    return 0;
}