#include <stdio.h>
#include <stdlib.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/

// Comparison function for ascending order
int compareAsc(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Comparison function for descending order
int compareDesc(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main() {
    int x;  
    scanf("%d", &x);
    
    int arr[x];
    for (int i = 0; i < x; ++i) {
        scanf("%d", &arr[i]);
    }

    char command;
    // Comparison function pointer
    int (*compareFunc)(const void *, const void *);

    // Endless loop for continuous input and sorting
    while (1) {
        scanf(" %c", &command);  

        if (command == 'a') {
            compareFunc = compareAsc;  // Set function pointer to ascending order
        } else if (command == 'd') {
            compareFunc = compareDesc; // Set function pointer to descending order
        } else if (command == 'e') {
            break;  
        }

        qsort(arr, x, sizeof(int), compareFunc);  // Sort the array using qsort

        // Print the sorted array
        for (int i = 0; i < x; ++i) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    
    return 0;
}
