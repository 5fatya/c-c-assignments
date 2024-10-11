/*Write a c program where you first enter a character c 
followed by an integer n and n double values representing temperatures in Celsius. 
Use an array for storing the temperatures. You can assume that not more than 100 temperature values would be entered. 
Your program should compute and/or print the following: if c is ’s’ the sum of the temperatures, 
if c is ’p’ the list of all tem- peratures, if c it ’t’ the list 
of all temperatures in Fahrenheit and if another character 
was entered then the arithmetic mean (or average) of all temperatures. 
The formula for converting Celsius to Fahrenheit is the following:
F = 5/9 · C + 32. Use a switch instruction in your solution.
You can safely assume that the input will be valid.*/
#include <stdio.h>

int main() {
    char c;
    int n;
    double temperatures[100]; // Array to hold up to 100 temperatures

    printf("Enter a character and an integer: ");
    scanf(" %c %d", &c, &n); // Note the space before %c to catch any previous newline

    printf("Enter %d temperatures in Celsius: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &temperatures[i]);
    }

    switch (c) {
        case 's': { // Sum of temperatures
            double sum = 0;
            for (int i = 0; i < n; i++) {
                sum += temperatures[i];
            }
            printf("Sum of temperatures: %f\n", sum);
            break;
        }
        case 'p': { // Print all temperatures
            printf("List of temperatures: ");
            for (int i = 0; i < n; i++) {
                printf("%f ", temperatures[i]);
            }
            printf("\n");
            break;
        }
        case 't': { // Convert to Fahrenheit and print
            printf("Temperatures in Fahrenheit: ");
            for (int i = 0; i < n; i++) {
                double fahrenheit = temperatures[i] * 9.0 / 5.0 + 32;
                printf("%f ", fahrenheit);
            }
            printf("\n");
            break;
        }
        default: { // Arithmetic mean
            double sum = 0;
            for (int i = 0; i < n; i++) {
                sum += temperatures[i];
            }
            double mean = sum / n;
            printf("Arithmetic mean of temperatures: %f\n", mean);
            break;
        }
    }

    return 0;
}


