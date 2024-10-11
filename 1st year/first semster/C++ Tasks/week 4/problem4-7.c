#include <stdio.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
void printMatrix(int mat[30][30], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void printMainDiagonal(int mat[30][30], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            printf("%d ", mat[i][j]);
        }
    }
    printf("\n");
}

void printSecondaryDiagonal(int mat[30][30], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = n - i; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
    }
    printf("\n");
}

int main(void) {
    int mat[30][30];
    int n;

    scanf("%d", &n);

    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("The entered matrix is:\n");
    printMatrix(mat, n);
    printf("Under the main diagonal:\n");
    printMainDiagonal(mat, n);
    printf("Under the secondary diagonal:\n");
    printSecondaryDiagonal(mat, n);

    return 0;
}





