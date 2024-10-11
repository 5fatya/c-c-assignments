/*
Problem 2.9 Categorization of characters 
Language: C
Graded automatically with testcases only
Write a program where you can enter a character from the keyboard. 
Then determine whether the character is a digit or a letter or
 some other symbol and print a corresponding message on the screen.
You can safely assume that the input will be valid.
Your solution has to satisfy the requirements 
from the problem description and has to pass the following 
testcase and potentially other testcases which are uploaded. 
All characters are relevant 
for passing testcases including newlines and spaces.
Testcase 2.9: input
!
Testcase 2.9: output
! is some other symbol
*/

#include <stdio.h>
#include <ctype.h> // Needed for isdigit() and isalpha()
int main() {

char any;
scanf("%c", &any);

if(isdigit(any)) { // isdigit is for digit/number
    printf("%c is a digit\n", any);
} else if (isalpha(any)) { //isalpha is for character 
    printf("%c is a letter\n", any);
} else {
    printf("%c is some other symbol\n", any);
}

    return 0;
}