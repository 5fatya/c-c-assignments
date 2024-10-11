#include <stdio.h>

void print_matrix(int n, int m, int a[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void print_frame(int n, int m, int a[n][m]) {
    printf("%d ", a[0][0]);
    for (int j = 1; j < m; j++) {
        printf("%d ", a[0][j]);
    }
    printf("\n");

    for (int i = 1; i < n - 1; i++) {
        printf("%d ", a[i][0]);
        for (int j = 1; j < m - 1; j++) {
            printf("%d ", a[i][j]);
        }
        printf("%d\n", a[i][m - 1]);
    }

    printf("%d ", a[n - 1][0]);
    for (int j = 1; j < m; j++) {
        printf("%d ", a[n - 1][j]);
    }
    printf("\n");
}

int main() {
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);

    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    //print_matrix(n, m, a);
    printf("\n");
    print_frame(n, m, a);

    return 0;
}