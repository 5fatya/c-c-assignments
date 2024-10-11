/*Problem P.2
Language: C
Write a program which does the following:
a) reads a double from the keyboard,
b) reads a float from the keyboard,
c) reads an integer from the keyboard,
d) stores the product of these three values into the variable result,
No information should be lost.
e) prints the value of result,
f) uses a pointer r ptr to add 5 to result,
g) prints the new values twice, once by using result, once by using r ptr.
*/

#include <stdio.h>

int main() {
double a;
printf("Enter a double value:");
scanf("%f", &a);
float b;
printf("enter a float value:");
scanf("%lf", &b);

int x;
printf("enter a integer:");
scanf("%d", &x);

double result; // used double bec, it holds more digits 
double *r_ptr;

result = a * b * x;
r_ptr = &result;
*r_ptr += 5;

printf("Value of result (after adding 5): %lf\n", result);
printf("Value of result (after adding 5) using r_ptr: %lf\n", *r_ptr);
    return 0;
}