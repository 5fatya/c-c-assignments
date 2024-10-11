#include <stdio.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
int main() {
    int weeks, days, hours;

    printf("Enter the number of weeks: ");
    scanf("%d", &weeks);

    printf("Enter the number of days: ");
    scanf("%d", &days);

    printf("Enter the number of hours: ");
    scanf("%d", &hours);

    //We should calculate the total number of hours
    int totalHours = (weeks * 7 * 24) + (days * 24) + hours;

    //Finally print the total number of hours using the printf function
    printf("Total number of hours: %d\n", totalHours);

    return 0;
}