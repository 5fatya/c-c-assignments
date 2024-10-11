/*Write a program which does the following:
1. reads a char from the keyboard,
2. and prints the char as character as well as in decimal, octal and hexadecimal notation.
*/
#include <stdio.h>

int main() {

char inputChar;

scanf("%c", &inputChar);
// Printing the character in different notations
// %c prints the character
// %d prints the ASCII value in decimal
// %o prints the ASCII value in octal
// %x prints the ASCII value in hexadecimal
printf("character=%c\n", inputChar);
printf("decimal=%d\n", inputChar);
printf("octal=%o\n", inputChar);
printf("hexadecmial=%x\n", inputChar);



    return 0;
}