/*Problem 3.6 Kilograms and grams to pounds 
Language: C
Write a program that converts the units of mass 
kg and g to pounds. 
First read the weight of an object expressed 
by values for kilograms and grams 
from the keyboard and convert the units of mass using the function (written by you as well)
float to_pounds(int kg, int g);
that does the actual conversion. Note that:
1 kilogram = 2.2 pounds
You can safely assume that the input will be valid.
Your solution has to satisfy the requirements from the problem description 
and has to pass the following testcase and potentially other testcases which are uploaded. 
All characters are relevant for passing testcases including newlines and spaces.
Testcase 3.6: input 
5
100
Testcase 3.6: output
Result of conversion: 11.220000 
*/

#include <stdio.h>

float to_pounds(int kg, int g) {
//convert total weight to kilograms (including the grams part)
float totalKg = kg + g / 1000.0f;
     
    return totalKg * 2.2f; //convert to pound
}

int main() {
int kg, g;
scanf("%d %d", &kg, &g);
printf("enter the weight in kilograms and grams:\n");

float pounds = to_pounds(kg, g);
printf("result of conversion: %.6f\n", pounds);

    return 0; 
}
