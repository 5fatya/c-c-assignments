/*Problem 3.11 Working with strings (2 points) Due by Monday, September 25th, 23:00 Graded automatically with testcases only
Language: C
Write a program where you can enter two strings called one and two from the keyboard. The string should be able to contain spaces. The program should do the following:
1. Print on the screen the lengths of both strings,
2. Print on the screen the concatenation of one with two,
3. Declare a third string, copy correctly two into it and print the third string to the screen,
4. Compare the two strings two and one and print a corresponding message to the screen,
5. Read a character c from the keyboard and search for c in two. The position of the first occurrence of c within two should be printed to the screen. If the character is not contained in the string then print a corresponding message on the screen.
For solving this problem use the string functions from string.h.
Learn how to use them with the help of the man pages.
Your solution has to satisfy the requirements from the problem description and has to pass the following testcase and potentially other testcases which are uploaded. All characters are relevant for passing testcases including newlines and spaces.
Testcase 3.11: input
first string
hello world
l
Testcase 3.11: output
length1=12
length2=11
concatenation=first stringhello world
copy=hello world
one is smaller than two
position=2*/

#include <stdio.h>
#include <string.h>

int main() {
    // Initialize character arrays to hold two input strings and one result string
    char one[100];
    char two[100];
    char result[100];

    // Read the first string from the user
    printf("enter the first string: ");
    fgets(one, sizeof(one), stdin);
    one[strcspn(one, "\n")] = '\0'; // Remove the newline character at the end
 
    // Read the second string from the user
    printf("enter the second string: ");
    fgets(two, sizeof(two), stdin); // to read two strings from the user, removing the newline character from each input
    two[strcspn(two, "\n")] = '\0'; // Remove the newline character at the end
 
    // Print the lengths of the first and second strings
    printf("length of the first string: %zu\n", strlen(one));
    printf("length of the second string: %zu\n", strlen(two));

    // Concatenate the first and second strings into 'result'
    strcpy(result, one);
    strcat(result, two);
    printf("concatenation of the first and second strings: %s\n", result);

    // Copy the second string into 'result'
    strcpy(result, two);
    printf("copy of the second string: %s\n", result);

    // Compare the two strings and print if they are equal or not
    int compareResult = strcmp(two, one);
    if (compareResult == 0) {
        printf("the two strings are equal.\n");
    } else {
        printf("the two strings are not equal.\n");
    }

    // Read a character from the user and search for it in the second string
    char c;
    printf("enter a character to search in the second string: ");
    scanf(" %c", &c);
    char *position = strchr(two, c);
    if (position != NULL) {
        int index = position - two;
        printf("character '%c' found at position %d in the second string.\n", c, index);
    } else {
        printf("character '%c' not found in the second string.\n", c);
    }

    return 0;
}
