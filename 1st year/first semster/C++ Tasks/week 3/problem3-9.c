#include <stdio.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/

double sum25(double v[], int n) {
    if (n < 5) {
        printf("One or both positions are invalid\n");
        return -111.0;
    }
    
    double sum = v[2] + v[5];
    return sum;
}

int main() {  
    int n;
    scanf("%d", &n);

    if (n < 6) {
        printf("One or both positions are invalid\n");
        return 1; 
    }

    double v[20]; 

    for (int i = 0; i < n; i++) {
        scanf("%lf", &v[i]);
    }

    double result = sum25(v, n);
    
    if (result != -111.0) {
        printf("sum=%lf\n", result);
    }

    return 0;
}

    