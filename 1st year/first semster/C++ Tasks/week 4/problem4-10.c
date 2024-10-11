#include <stdio.h>
#include <math.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb) {
    *prod = a * b;
    *div = a / b;
    *pwr = pow(a, b);
    *invb = 1.0 / b;
}

int main() {
    float a, b, product, division, power, inverseb;
    
    printf("Enter numbers: ");
    scanf("%f", &a);
    scanf("%f", &b);

    proddivpowinv(a, b, &product, &division, &power, &inverseb);

    printf("Product: %f\n", product);
    printf("Division: %f\n", division);
    printf("a to the power of b: %f\n", power);
    printf("Inverse of the second number: %f\n", inverseb);

    return 0;
}

