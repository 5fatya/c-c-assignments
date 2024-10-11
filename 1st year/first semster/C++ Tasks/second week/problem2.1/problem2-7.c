#include <stdio.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/

int main() {
    int i = 8;

    while (i >= 4) {
        printf("i is %d\n", i);
        i--;
    }

    printf("That's it.\n");

    return 0;
}
/*The problem with this code is that the decrement statement i--; and the "That's it."
message are outside the while loop*/