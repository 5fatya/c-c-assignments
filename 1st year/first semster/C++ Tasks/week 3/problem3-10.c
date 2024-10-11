#include <stdio.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
float product(float a,float b) {
    return a * b;
}

void productbyref(float a,float b,float *p) {
    *p = a * b;
}

void modifybyref(float *a,float *b) {
    *a += 3.0;
    *b += 11.0;
}

int main() {
    float num1,num2;
    float result1,result2;
    
    printf("enter the first float value: ");
    scanf("%f", &num1);
    printf("enter the second float value: ");
    scanf("%f", &num2);

    
    result1 = product(num1,num2);

    
    productbyref(num1,num2,&result2);

    
    printf("result of product function: %.6f\n", result1);
    printf("result of productbyref function: %.6f\n", result2);

    
    modifybyref(&num1, &num2);

    printf("modified value of the first float: %.6f\n", num1);
    printf("modified value of the second float: %.6f\n", num2);

    return 0;
}
