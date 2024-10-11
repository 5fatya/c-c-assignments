/*Problem 3.2
Language: C
Writing characters
Write a program where you first enter a lowercase character ch 
and then an integer n from the keyboard. 
Print the characters ch, ch−1, ..., ch−n on the screen.
You can safely assume that the input is valid and you do not have to do any checks.
*/

#include <stdio.h>

int main() {
char ch;
int n;

scanf("%c", &ch);
scanf("%d", &n);

printf("here are the characters:\n");

for (int i = 1; i <= n; i++) {
 
 printf("%c\n", ch - i); // i added a loop that counts from 0 to n

 }

printf("\n");


    return 0;
}