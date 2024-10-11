/*Problem 3.7 Printing a form 
Language: C
Write a program which reads two integers n, m and a character c from the keyboard. 
This pro- gram should define and call a function with the prototype:
void print form(int n, int m, char c);
which prints a trapezoid of height n, bases m and m+n-1 consisting of the character c as in the following testcase.
Testcase 3.7: input
4 
3 
$
Testcase 3.7: output
$$$
$$$$
$$$$$
$$$$$$ */

#include <stdio.h>

void print_form(int n, int m, char c) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m + i; j++) {
            printf("%c", c);
        }
        printf("\n");
    }
}
int main() {
  
  int n;
  int m;
  char c;
scanf("%d %d %c", &n, &m, &c);

print_form(n, m, c);




    return 0;
}