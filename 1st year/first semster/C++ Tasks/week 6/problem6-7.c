#include <stdio.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/

// Function to set three bits of an unsigned char to 1
// at positions bit1, bit2, and bit3
void set3bits(unsigned char *ch, int bit1, int bit2, int bit3) {
    // Use bitwise OR to set each of the three bits
    *ch |= (1 << bit1) | (1 << bit2) | (1 << bit3);
}

int main() {
    unsigned char ch;  // The character to be modified
    int bit1, bit2, bit3;  // Bit positions to set to 1

    // Read the character from standard input
    scanf("%c", &ch);

    printf("The decimal representation is: %d\n", ch);

    
    printf("The binary representation is: ");
    for (int i = 7; i >= 0; i--) {  // Looping through each bit position
        printf("%d", (ch >> i) & 1);  // Shift and mask to get each bit
    }
    printf("\n");

    // Read the bit positions to set to 1
    scanf("%d %d %d", &bit1, &bit2, &bit3);

    // Call the function to set the bits
    set3bits(&ch, bit1, bit2, bit3);

    // Print the modified binary representation
    printf("After setting the bits: ");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (ch >> i) & 1);
    }
    printf("\n");

    return 0;
}
