/*Problem P.1 (2 points) 
Language: C
Please complete the following program fragment 
such that it prints n rows with the pattern below using nested loops.
 int n;
 scanf("%d", &n);
 // add your code completion below
So if the user enters 6 for n, the following 6 rows should be printed:
A
AB
ABC
ABCD
ABCDE
ABCDEF
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Outer loop for each row
    for (int i = 0; i < n; i++) {
        // Inner loop for printing characters in each row
        for (int j = 0; j <= i; j++) {
            printf("%c", 'A' + j); // Print character starting from 'A'
        }
        printf("\n"); // New line after each row
    }

    return 0;
}


