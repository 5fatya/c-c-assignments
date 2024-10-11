/*Language: C
Write the definition of the function
bool odd(unsigned char data);
which checks is the value passed 
to the function is odd or not 
by returning true or false, respectively. 
The function has to use bitwise operators and 
is not allowed to use arithmetic operators.
*/
#include <stdbool.h> // Include for using bool type

bool odd(unsigned char data) {
    // Check the least significant bit: if it's 1, the number is odd
    return (data & 1) == 1;
}

int main() {
    // Example usage
    unsigned char value = 5;
    if (odd(value)) {
        printf("%u is odd\n", value);
    } else {
        printf("%u is even\n", value);
    }
    return 0;
}

