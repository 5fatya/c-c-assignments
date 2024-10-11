#include <stdio.h>
#include <stdlib.h> // for dynamic memory allocation and free
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/

// Function to divide each element in the array by 5
void divby5(float arr[], int size) {
    for (int i = 0; i < size; ++i)
        arr[i] = arr[i] / 5;
}

int main() {
    int n;

    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    float *arr = (float *)malloc(n * sizeof(float));
    
    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1; 
    }

   
    printf("Enter %d float elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    printf("Before:\n"); // Print the original array before division
    for (int i = 0; i < n; i++)
        printf("%.3f\t", arr[i]);
    printf("\n");

    divby5(arr, n); // divby5 function to divide each element by 5
    // Print array after the division
    printf("After:\n"); 
    for (int i = 0; i < n; ++i)
        printf("%.3f\t", arr[i]);
    printf("\n");

    
    free(arr);

    return 0;
}
