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

    scanf("%d", &lengthInCm); 
    
    float lengthInKm = convert(lengthInCm);

    printf("Result of conversion: %.6f\n", lengthInKm);


    return 0;
}