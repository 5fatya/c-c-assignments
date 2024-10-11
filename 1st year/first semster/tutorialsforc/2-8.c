/*Problem 2.8 Divisible by 2 and 7?
Language: C
Write a program, where you can enter an integer from the keyboard.
Determine whether the number is divisible by both 2 and 7. 
Then either print on the screen
“The number is divisible by 2 and 7” or
“The number is NOT divisible by 2 and 7”.
You can safely assume that the input will be valid.
Your solution has to satisfy the requirements from the problem description and has to pass the following testcase and potentially other testcases which are uploaded. All characters are relevant for passing testcases including newlines and spaces.
Testcase 2.8: input
56
Testcase 2.8: output
The number is divisible by 2 and 7
*/

#include <stdio.h>
int main() {

int numbers;

// enter any integer 
scanf("%d", &numbers);

// numbers that are only divisible by 2 and 7 
if (numbers % 2 == 0 && numbers % 7 == 0) {
printf("the number is divisible by 2 and 7\n");
} else {
    printf("the number is not divisible by 2 and 7\n");
}


return 0;
}

