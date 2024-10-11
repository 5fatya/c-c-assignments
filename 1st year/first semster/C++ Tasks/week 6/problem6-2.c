#include <stdio.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/



#define TLSB(x) ((x) & 1)

int main() {
    unsigned char input;
    int num;
    unsigned char input;
    scanf("%c",&input);
    int dec = (int)input;

    printf("The decimal representation is: %d\n", input);

    
    printf("The least significant bit is: %d\n", TLSB(inputChar));

    return 0;
}

