#include <stdio.h>
/* CH-230-A
 (problem2-i1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
int main() {
    unsigned char ch;
    scanf("%c", &ch); // Read the unsigned char from standard input

    // Print the decimal representation
    printf("The decimal representation is: %d\n", ch);

    // Print the binary representation
    printf("The binary representation is: ");
    for (int i = 7; i >= 0; --i) {
        // i used a mask to check each bit
        int bit = (ch & (1 << i)) ? 1 : 0;
        printf("%d", bit);
    }
    printf("\n"); // End with a newline so we do not cause spaces issues

    return 0;
}
