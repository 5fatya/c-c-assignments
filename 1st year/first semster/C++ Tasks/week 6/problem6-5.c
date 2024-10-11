#include <stdio.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/

int main() {
    unsigned char ch; // unsigned char declaration
    scanf("%c", &ch); // getting user input from console

    int num = ch; // getting decimal value from char
    printf("The decimal representation is: %d\n", num); // display decimal value

    int size = 1; // bit mask for bitwise operator
    int ans; // This stores value of answer

    if(num > 128) // Setting mask size based on the decimal value of char
        size = 8;
    else if(num > 64)
        size = 7;
    else if(num > 32)
        size = 6;
    else if(num > 16)
        size = 5;
    else if(num > 8)
        size = 4;
    else if(num > 4)
        size = 3;
    else if(num > 2)
        size = 2;
      /* 
        doing a left shift of 1 based on the loop counter then doing an & with the
        number to get the bits in reverse order
        for e.g. if num=6(110) then size=3;
        loop will run three times 0,1,2
        for i=0; 6(1<<0)=0 110&(001)=000 will give 0
        for i=1; 6(1<<1)=2 110&(010)=010 will give 1
        for i=2; 6(1<<2)=4 110&(100)=100 will give 1; 
        It will print 011 which is reversed
        */
    printf("The backwards binary representation is: ");
    for (int i = 0; i < size; ++i) { // loop for bitwise shifting and operation
        ans = ((num & (1 << i)) == 0) ? 0 : 1;
        printf("%d", ans); // printing iteration result without spaces
    }
    printf("\n");  // Ensure the output ends with a newline
    return 0;
}

