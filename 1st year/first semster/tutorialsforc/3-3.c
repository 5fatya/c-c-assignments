/*Problem 3.3 Centimeters to kilometers 
Language: C
Write a program that converts an integer length that is entered 
from the keyboard in cm to km. Write and use afunction float convert(int cm)
that does the actual conversion.
You can safely assume that the input will be valid.
Your solution has to satisfy the requirements from the problem description and has to pass the following testcase and potentially other testcases which are uploaded. All characters are relevant for passing testcases including newlines and spaces.
Testcase 3.3: input 
12 
Testcase 3.3: output
Result of conversion: 0.000120
*/

#include <stdio.h>

float convert(int cm) {

    return (float) cm/10000.0; // Convert cm to km
}

int main() {

int lengthInCm;
scanf("%d", &lengthInCm); // Read the length in centimeters

float lengthInKm = convert(lengthInCm); // Convert to kilometers
 
printf("result of conversion: %.6f \n", lengthInKm); // Print the result with 6 decimal places


 return 0;
}