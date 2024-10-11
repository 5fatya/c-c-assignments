#include <stdio.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
int main() {
   float a, b, h;

    // we will enter the values of a, b, and h
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &h);

    /*Compute and print the areas of the shapes*/
    float square_area = a * a;
    double rectangle_area = a * b;
    float triangle_area = 0.5 * a * h;
    float trapezoid_area = 0.5 * (a + b) * h;

    printf("square area=%f\n", square_area);
    printf("rectangle area=%f\n", rectangle_area);
    printf("triangle area=%f\n", triangle_area);
    printf("trapezoid area=%f\n", trapezoid_area);

    return 0;
}