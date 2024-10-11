#include <stdio.h>

int main() {
    double number;
    char alphabet;
    
    printf("Enter an input value: ");
    scanf("%lf", &number);
    scanf(" %c", &alphabet);  // Note the space before %c to consume whitespace
    
    printf("Number: %lf\n", number);
    printf("Alphabet: %c\n", alphabet);
    
    return 0;
}

