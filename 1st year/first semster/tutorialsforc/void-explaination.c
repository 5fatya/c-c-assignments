#include <stdio.h>
#include <stdlib.h>
/* #include <stdlib.h> is used for so many things such as 
1.Dynamic Memory Allocation: Functions for
 dynamically allocating and freeing memory, such as malloc, calloc, realloc, and free. 
 These functions are used to manage memory manually, which is particularly 
 important in C since it doesn't have built-in garbage collection like some higher-level languages.

2.Conversion Functions: Functions to convert strings to different types of values. 
For example, atoi (convert string to int), atol (convert string to long), atof (convert string to float), etc.
Random Number Generation: Functions to generate random numbers, such as rand and srand.

3.Process Control: Functions for performing various kinds of process control, 
such as exit to terminate the program, system to issue a command to the system shell, 
abort to cause abnormal program termination, etc.
Environment Access: Functions to access the environment of the process,
 like getenv, which returns a pointer to a string containing the value of the specified environment variable.
Searching and Sorting: Utility functions for performing searches (bsearch) and sorting (qsort) on arrays.

4.Mathematical Functions: Although most common mathematical 
functions are in math.h, stdlib.h includes some basic mathematical utilities
 such as abs for calculating the absolute value of an integer, div for division and remainder of an integer division, etc.
*/

//now let's start with void

// Function returning void (no return value)
void printGreeting() {
    printf("Hello, World!\n");
}

// Function with void parameter (no arguments)
void doNothing(void) {
    // This function deliberately does nothing
}

// Function taking a void pointer as an argument
void printIntegerFromVoidPointer(void *ptr) {
    // Cast void pointer to int pointer and dereference it to print the integer value
    printf("Integer value: %d\n", *(int*)ptr);
}

int main() {
    // Using a function that returns void
    printGreeting();

    // Using a function that has void parameter
    doNothing();

    // Using a void pointer
    int x = 10;
    void *ptr = &x; // void pointer can point to any data type

    // Using a function that takes a void pointer as an argument
    printIntegerFromVoidPointer(ptr);

    return 0;
}
