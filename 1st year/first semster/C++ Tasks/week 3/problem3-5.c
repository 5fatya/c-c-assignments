#include <stdio.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
int main() {
    char c;
    int n;

    scanf("%c", &c);
    
    scanf("%d", &n);

    double temperatures[100];
    double sum = 0.0;
    
    for (int i = 0; i < n; i++) {
        scanf("%lf", &temperatures[i]);
        sum += temperatures[i];
    }

    if (c=='s') {
        printf("sum of temperatures: %.2lf\n", sum);
    } else if (c == 'p') {
        printf("list of temperatures in Celsius:\n");
        for (int i = 0; i < n; i++) {
            printf("%.2lf ", temperatures[i]);
        }
        printf("\n");
    } else if (c == 't') {
        printf("list of temperatures in Fahrenheit:\n");
        for (int i =0; i < n; i++) {
            double fahrenheit=(temperatures[i] * 9/5)+32;
            printf("%.2lf ",fahrenheit);
        }
        printf("\n");
    } 
     { 
        double average = sum / n;
        printf("arithmetic mean of temperatures: %.2lf\n", average);
    }

    return 0;
}
