/*Write a program where you can enter integer numbers for weeks, days and hours as input from the keyboard. 
Your program should compute and output by printing on the screen the total number of hours.*/

#include <stdio.h>

int main() {

int weeks, days, hours;

printf("enter the number of the weeks:");
scanf("%d", &weeks);

printf("enter the number of days:");
scanf("%d", &days);

printf("enter the number of hours");
scanf("%d", &hours);

//We should calculate the total number of hours
//The total hours are calculated by converting weeks to hours 
//(1 week = 7 days, 1 day = 24 hours), 
//adding the converted days to hours, and then adding the standalone hours.
int totalHours = (weeks * 7 * 24) + (days * 24) + hours;

 // Printing the total number of hours
 printf("total number of hours:%d\n", totalHours);
    return 0;
}