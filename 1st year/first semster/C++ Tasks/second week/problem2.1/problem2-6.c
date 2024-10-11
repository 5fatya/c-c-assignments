#include <stdio.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
int main() {
    double x, y;

    /*enter two double values*/
    printf("enter the value of x: ");
    scanf("%lf", &x);

    printf("enter the value of y: ");
    scanf("%lf", &y);

// Declare and initialize pointers
    double *ptr_one = &x;
    double *ptr_two = &x;
    double *ptr_three = &y;

    // Print the memory addresses
    printf("address of x=%p\n", (void *)&x);
    printf("address of y=%p\n", (void *)&y);

    // Print the memory addresses of pointers
    printf("address of ptr_one=%p\n", (void *)ptr_one);
    printf("address of ptr_two=%p\n", (void *)ptr_two);
    printf("address of ptr_three=%p\n", (void *)ptr_three);

return 0;
}