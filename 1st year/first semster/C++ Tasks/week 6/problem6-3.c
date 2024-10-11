#include <stdio.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
ffares@jacobs-university.de
*/
#define MINI(a,b) ((a)<(b)?(a):(b))
#define MIN(a,b,c) MINI(MINI(a,b),c)
#define MAXI(a,b) ((a)>(b)?(a):(b))
#define MAX(a,b,c) MAXI(MAXI(a,b),c)

// Takes a,b,c and returns the mid point
float mid_range(float a,float b,float c)
{
    float mid;
    mid = (MIN(a,b,c) + MAX(a,b,c)) / 2;
    return mid;
}

// main function    
int main()
{
    // declaring the variables
    float a, b, c, mid;

    // taking the input a,b,c by the user
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    // calling the mid_range function and storing the value in mid
    mid = mid_range(a, b, c);

    // printing the output
    printf("The mid-range is: %.6f\n", mid);

    return 0;
}
