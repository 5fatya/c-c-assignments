/* CH-230-A
Fatima Fares
 ffares@jacobs-university.de
*/
#ifndef STACK_H
#define STACK_H

#define MAX 50 

// Prototype for checking if stack is empty
int isEmpty(int top);

// Prototype for pushing a value onto the stack
void push(int x, int *top, int stack_arr[]);

// Prototype for popping a value off the stack
int pop(int *top, int stack_arr[]);

#endif 
