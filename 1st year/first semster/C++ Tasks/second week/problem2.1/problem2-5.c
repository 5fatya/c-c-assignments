#include <stdio.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
int main() {
    int a;

    // enter an integer
    printf("enter an integer: ");
    scanf("%d", &a);

    // Print the original value of a
    printf("original value of a=%d\n", a);

    // Declare and initialize a pointer ptr_a pointing to a
    int *ptr_a = &a;

    // Print the address contained in the pointer variable ptr_a
    printf("address contained in ptr_a=%p\n", (void *)ptr_a);

    // Increase the value of a by 5 using the pointer variable ptr_a
    *ptr_a += 5;

    // Print the modified value of a
    printf("modified value of a=%d\n", a);

    // Print the address of the variable a
    printf("address of variable a=%p\n", (void *)&a);

    return 0;
}


