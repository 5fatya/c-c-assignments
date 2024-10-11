#include <stdio.h>

int main() {
    double result; /* The result of the division */
    int a = 5;
    double b = 13.5;
    result = a / b;
    printf("The result is %lf\n", result);
    return 0;
}
// i changed int b to double bc there decimal point
// and the result is from %d\n to Lf bc double uses this specifier 