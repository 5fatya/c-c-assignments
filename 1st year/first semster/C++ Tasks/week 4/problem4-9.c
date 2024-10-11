#include <stdio.h>
#include <stdlib.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
int prodminmax(int arr[], int n) {
    if (n == 1) {
        return arr[0] * arr[0];
    }

    int i;
    int min = arr[0], max = arr[0];

    for (i = 0; i < n; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    return min * max;
}

int main() {
    int n, i;
    printf("Enter n: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit with an error code
    }

    printf("Enter %d elements in array\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Product of smallest and largest elements is %d", prodminmax(arr, n));
    
    free(arr);
    return 0;
}
