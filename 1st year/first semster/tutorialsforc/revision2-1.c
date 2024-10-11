
/*Problem 2.1 Reading from the keyboard Presence assignment
Write a program which does the following:
Graded automatically with testcases only
1. reads two doubles from the keyboard,
2. prints the sum of the two doubles,
3. prints the difference of the two doubles (first minus second), 4. prints the square of the first double,
5. reads two integers from the keyboard,
6. computes the sum and product of the two integers,
7. prints the sum and product of the integers,
8. reads two chars from the keyboard,
9. computes the sum and product of the two chars,
10. prints the sum and product of the chars as decimal values and as chars.
*/
#include <stdio.h>
int main() {
double a , b; 
scanf("%lf %lf", &a, &b);

printf("sum of doubles=%lf\n", a + b);
printf("difference of doubles=%lf\n", a - b);
printf("square=%lf\n", a * a);
 
int c , d;
printf("sum of integers=%d\n", c + d);
scanf("%d %d", &c, &d);
printf("product of integers\n", c * d);
// Compute the sum and product of the two integers
int sum_int = c + d; // sum of the product 
int product_int = c * d; // compute the product 

// print the sum and product of the integers 
printf("sum of the integers=%d\n", sum_int);
printf("product if the integers=%d\n", product_int);

// read two chars from the keyboard
char char1 , char2;
getchar();/*Clearing the input buffer
After scanf(), a newline character is left in the buffer. 
getchar() here reads and removes it.*/ 
scanf("%c", &char1);
getchar();
scanf("%c", &char2);

// Compute the sum and product of the two chars

int sum_char = char1 + char2;
int product_char = char1 * char2;

printf("sum of chars=%d\n", sum_char);
printf("product of chars=%d\n", product_char);
printf("sum of chars=%c\n", sum_char);
printf("product of chars=%c\n", product_char);

    return 0;
}
