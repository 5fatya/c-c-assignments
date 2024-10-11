/*Problem 2.6 Multiple pointers to same data (1 point) 
Due by Monday, September 18th, 23:00 Graded manually
Language: C
Write a program which reads two double variables x and y from the keyboard. 
Then declare and initilize three pointers ptr_one, ptr_two 
and ptr_three such that ptr_one and ptr_two will both point 
to the variable x and ptr_three will point to y. 
By using printf show that ptr_one and ptr_two contain the same memory address 
and ptr_three contains a different address.
You can assume that the input will be correct*/

#include <stdio.h>

int main() {
 double x , y;
 scanf("%lf %lf", &x, &y); 


// declare and Initialize the pointer to point to x
double *ptr_one , *ptr_two = &x;

// / declare and Initialize the pointer to point to y
double *ptr_three = &y;


// Print the memory addresses altogether double value x and y 
    printf("address of x=%p\n", (void *)&x);
    printf("address of y=%p\n", (void *)&y);
 
    // Print the memory addresses of each pointers  
    printf("address of ptr_one=%p\n", (void *)ptr_one);
    printf("address of ptr_two=%p\n", (void *)ptr_two);
    printf("address of ptr_three=%p\n", (void *)ptr_three);
 



    return 0;
}