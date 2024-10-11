#include <stdio.h>
#include <stdlib.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/

int main() {
    int n, m, p;
    scanf("%d%d%d", &n, &m, &p); // inputting dimensions

    int i, j, k; // loop counter variables

    // dynamically allocating matrix A
    int **a = (int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++)
        a[i] = (int *)malloc(m * sizeof(int));

    // dynamically allocating matrix B
    int **b = (int **)malloc(m * sizeof(int *));
    for (i = 0; i < m; i++)
        b[i] = (int *)malloc(p * sizeof(int));

    // dynamically allocating result matrix
    int **mul = (int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++)
        mul[i] = (int *)malloc(p * sizeof(int));

    // inputting A
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    // inputting B
    for (i = 0; i < m; i++)
        for (j = 0; j < p; j++)
            scanf("%d", &b[i][j]);

    // outputting A
    printf("Matrix A:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    // outputting B
    printf("Matrix B:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }

    // computing A x B
    for (i = 0; i < n; i++)
        for (j = 0; j < p; j++) {
            mul[i][j] = 0;
            for (k = 0; k < m; k++)
                mul[i][j] += a[i][k] * b[k][j];
        }

    // outputting result
    printf("The multiplication result AxB:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++)
            printf("%d ", mul[i][j]);
        printf("\n");
    }

    

    return 0;
}
