/*Problem 2.5
Language: C
Write a program which reads an integer variable a from 
the keyboard and prints the value on the screen. 
Then declare and initialize a pointer ptr_a pointing to a, 
print the address contained in the pointer variable on the screen, 
increase the value of a by 5 by using the pointer variable 
and print the modified value and the address of 
the variable on the screen as well.
You can safely assume that the input will be correct.
*/
#include <stdio.h>


int main() {
    int a;          // Declare an integer variable 'a'
    

    // Read an integer from the keyboard
    printf("Enter an integer: ");
    scanf("%d", &a);

    // Print the value of 'a'
    printf("The value of a: %d\n", a);

    // declare and Initialize the pointer to point to 'a'
    int *ptr_a = &a;

    // Print the address contained in the pointer variable
    printf("The address of a: %p\n", (void *)ptr_a);

    // Increase the value of 'a' by 5 using the pointer variable
    *ptr_a += 5;

    // Print the modified value of 'a'
    printf("The modified value of a: %d\n", a);

    // Print the address of the variable 'a' again
    printf("The address of a after modification: %p\n", (void *)&a);
   
    return 0;

}
