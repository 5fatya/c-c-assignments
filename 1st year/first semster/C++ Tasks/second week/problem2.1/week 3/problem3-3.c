#include <stdio.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/

float convert(int cm) {
    
    return (float) cm/100000.0;
}

int main() {
    int lengthInCm;

    printf("enter the length in centimeters:");
    scanf("%d", &lengthInCm); 
    
    float lengthInKm = convert(lengthInCm);

    printf("%d cm is equal to %.5f kilometers\n", lengthInCm, lengthInKm);


    return 0;
}


