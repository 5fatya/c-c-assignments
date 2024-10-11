/*Complete the following program fragment such that the program prints a triangle as described further below.
 int n;
 char ch;
 scanf("%d", &n);
 getchar();
 scanf("%c", &ch);
 // add your code completion below
Then the program prints a triangle with n rows, n columns using the character ch as illustrated in the testcase.
Testcase: input Testcase: output
4
@ 
Testcase: output
@ 
@@
@@@ 
@@@@
*/

#include <stdio.h>

int main() {
    int n;
    char ch;
    scanf("%d", &n);
    getchar(); // To consume the newline character after entering the number
    scanf("%c", &ch);

    // Loop for each row
    for (int i = 1; i <= n; i++) { // The outer loop iterates over each row
        // Nested loop for each column in the row
        for (int j = 1; j <= i; j++) { // The inner loop  controls the number of characters printed in each row. It prints up to i characters, where i is the current row number.
            printf("%c", ch); // Print the character
        }
        printf("\n"); // New line after each row
    }

    return 0;
}

