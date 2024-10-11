/*Problem 3.10 Return changes by reference 
Language: C
Write a program which reads two float values from the keyboard. 
Then write three functions. 
The first function should return the product of the two float values and should have the proto-type:
float product(float a, float b);
The second function should return the product of the two float values by reference and should have the prototype:
void productbyref(float a, float b, float *p);
The third function should add 3 to the first float and 11 to the second float and return the change by reference.
 It should have the prototype:
void modifybyref(float *a, float *b);
Show that the calls of the first two functions have the same effect. Also show what is the effect of calling modifybyref.
You can safely assume that the input will be valid.
*/

#include <stdio.h>

// Function to return the product of two floats
float product(float a, float b) {
    return a * b; // Multiply a and b and return the result
}

// Function to calculate the product of two floats and store it in a reference (pointer)
void productbyref(float a, float b, float *p) {
    *p = a * b; // Multiply a and b and store the result in the location pointed to by p
}

// Function to modify two float values by reference
void modifybyref(float *a, float *b) {
    *a += 3.0; // Add 3.0 to the value pointed by a
    *b += 11.0; // Add 11.0 to the value pointed by b
}

int main() {
    float num1, num2;
    // Read two float values from the user
    scanf("%f %f", &num1, &num2); 

    float result1, result2;

    // Calculate the product of num1 and num2 using the product function
    result1 = product(num1, num2);

    // Calculate the product of num1 and num2 using the productbyref function
    productbyref(num1, num2, &result2);

    // Print the results of the product and productbyref functions
    printf("result of product function: %.6f\n", result1);
    printf("result of productbyref function: %.6f\n", result2);

    // Modify num1 and num2 by calling modifybyref
    modifybyref(&num1, &num2);

    // Print the modified values of num1 and num2
    printf("modified value of the first float: %.6f\n", num1);
    printf("modified value of the second float: %.6f\n", num2);

    return 0; 
}
