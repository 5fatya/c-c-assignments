#include <stdio.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/

/*main function to convert kg to g to pounds
Conversion factor: 1 kg = 2.2 pounds
*/  
float to_pounds(int kg,int g) {
    float total_kg = kg+(g/1000.0); 
    return total_kg * 2.2; 

}

int main() {
    int kg, g;
    scanf("%d",&kg);
    scanf("%d", &g);

    float pounds = to_pounds(kg,g);

    printf("Result of conversion: %.6f\n",pounds);

    return 0;
}
