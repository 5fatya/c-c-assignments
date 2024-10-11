/*Problem 2.10 Days and hours 
Language: C
Write a program where you can enter 
an integer n from the keyboard. T
hen a conversion table for 1 to n days 
should be printed on the screen as 
in the example below. 
Make sure that the integer value 
you entered for n is valid 
(positive and non-zero). 
If an invalid integer n was 
entered then repeat the entering 
until a valid value will be entered.
Use a while loop in your solution.
1 day = 24 hours
2 days = 48 hours
3 days = 72 hour
*/

#include <stdio.h>

int main() {

int n; 

while(1) { // The program then enters a while loop that will keep looping 
           // until a valid input is received
    printf("enter a positive non-zero integer(n):");
    scanf("%d", &n);

if (n > 0) { // The program then checks if the input is a positive integer
    break; // exist the loop if n is valid 
} else { /* If the input is not valid, the program prints an error message
           and asks the user to try again*/
    printf("invalid input. try again to enter a positive non-zero integer\n");
    }
}
// print the conversion table 
printf("conversion table:\n");
for (int i = 1; i <= n; i++) {
    printf("%d day%s = %d hours%s\n", i, (i == 1) ? "" : "s", i * 24, (i == 1) ? "" : "s");
}
    return 0;
}