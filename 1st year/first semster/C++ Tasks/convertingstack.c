/* CH-230-A
Fatima Fares
ffares@jacobs-university.de
 */
#include <stdio.h>
#include "stack.h"

// Function to convert decimal to binary using a stack
void DecToBin(int num) {
    int stack[MAX];
    int top = -1;
    int rem;

    while (num != 0) {
        rem = num % 2;
        push(rem, &top, stack);
        num /= 2;
    }

    while (!isEmpty(top)) {
        printf("%d", pop(&top, stack));
    }
    printf("\n");
}

// Main function
int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Binary Equivalent is: ");
    DecToBin(num);

    return 0;
}

