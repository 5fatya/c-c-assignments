#include <stdio.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
int main() {
    int n;

    // enter a positive and non-zero integer
    while (1) {
        printf("enter a positive non-zero integer (n): ");
        scanf("%d", &n);

        if (n > 0) {
            break; // exit the loop if n is valid
        } else {
            printf("invalid input. Please enter a positive non-zero integer.\n");
        }
    }

    // Print the conversion table
    printf("conversion Table:\n");
    for (int i = 1; i <= n; i++) {
        printf("%d day%s = %d hours%s\n", i, (i == 1) ? "" : "s", i * 24, (i == 1) ? "" : "s");
    }

    return 0;
}

