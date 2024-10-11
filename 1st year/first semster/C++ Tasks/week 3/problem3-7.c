#include <stdio.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/

void print_form(int n, int m, char c) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }

        for (int j = 0; j < m + n - i; j++) {
            printf("%c", c);
        }

        printf("\n");
    }
}

 
 int main() {
    int n, m;
    char c;

    printf("enter the values for n, m, and c: ");
    scanf("%d %d %c", &n, &m, &c);
    print_form(n, m, c);
    return 0;
}
