/*
Problem 3.1 Writing numbers (1 point) Presence assignment, Language: C
Write a program where you first enter a float x and then an integer n from the keyboard. Print the float x n times to the screen. Make sure that n will have a valid integer value. In the invalid case repeat entering n until a valid value will be entered. 
Your solution has to satisfy the requirements from the problem description and has to pass the following testcase and potentially other testcases which are uploaded. All characters are relevant for passing testcases including newlines and spaces. 
Testcase 3.1: input 
1.25 
-8
0
4 
Testcase 3.1: output 
Input is invalid, reenter value
Input is invalid, reenter value 
1.250000
1.250000
1.250000
1.250000
*/
#include <stdio.h>

int main() {
    float x;
    int n;
    // Enter the float x
    scanf("%f", &x);

    // Enter the integer n, with validation
    do {
        scanf("%d", &n);
        if (n <= 0) {
            printf("Input is invalid, reenter value\n");
        }
    } while (n <= 0);

    // Print the float x n times
    for (int i = 0; i < n; i++) {
        printf("%.6f\n", x);
    }

    return 0;
}
