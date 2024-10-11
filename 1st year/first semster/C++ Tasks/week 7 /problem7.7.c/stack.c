/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

// Check if the stack is empty
int isEmpty(int top) {
    return top == -1;
}

// Push an element onto the stack
void push(int x, int *top, int stack_arr[]) {
    if (*top == (MAX - 1)) {
        printf("Stack Overflow\n");
    } else {
        stack_arr[++(*top)] = x;
    }
}

// Pop an element from the stack
int pop(int *top, int stack_arr[]) {
    if (isEmpty(*top)) {
        printf("Stack Underflow\n");
        exit(1);
    } else {
        return stack_arr[(*top)--];
    }
}

