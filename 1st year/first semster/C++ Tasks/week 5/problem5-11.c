#include <stdio.h>

int main() {
    double number;
    char alphabet;
    
    printf("Enter an input value: ");
    scanf("%lf", &number);  // Read the double value
    while ((getchar()) != '\n');  // Clear the input buffer
    scanf("%c", &alphabet);  // Read the character
    
    printf("Number: %lf\n", number);
    printf("Alphabet: %c\n", alphabet);
    
    return 0;
}


