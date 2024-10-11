#include <stdio.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
int main() {
    int number;

    //enter an integer
    scanf("%d", &number);

    //the number will be divisible by both 2 and 7
    if (number % 2 == 0 && number % 7 == 0) {
        printf("The number is divisible by 2 and 7\n");
    } else {
        printf("The number is NOT divisible by 2 and 7\n");
    }

    return 0;
}
