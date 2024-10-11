#include <iostream>
#include <string>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/

int main() {
    int n; // Declare an integer n to store the number of repetitions
    double x; // Declare a double x to store the floating point value
    std::string s; // Declare a string s to store the input string

    std::cout << "Enter an integer value for n: ";
    std::cin >> n;

    // Read the double value x from the keyboard
    std::cout << "Enter a double value for x: ";
    std::cin >> x;
    //Uses std::cin to read the values for n, x, and s from the user.
    
    std::cout << "Enter a string s: ";
    std::cin >> s;

    // Loop to print s and x, separated by ':', n times
    for (int i = 0; i < n; i++) {
        std::cout << s << ":" << x << std::endl;
    }

    return 0;
}
