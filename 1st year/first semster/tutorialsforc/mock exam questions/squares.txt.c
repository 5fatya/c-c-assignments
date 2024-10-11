/*Problem P.3
Language: C
Write a program where you first read an integer n, then n integers are read from the keyboard 
and stored in a dynamically allocated array. Then these numbers and 
their square should be written to a file named squares.txt in the opposite order of their input.
So if the user enters
6 
1 
2 
3 
4 
5
6
your output should look like in the following:
6 36 
5 25 
4 16 
3 9 
2 4 
1 1
*/

#include <stdio.h>
#include <stdlib.h> // Include for malloc and free

int compare(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main() {
    int n, i;
    int *numbers;
    FILE *file;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    numbers = (int *) malloc(n * sizeof(int));

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    file = fopen("squares.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    for (i = n - 1; i >= 0; i--) {
        fprintf(file, "%d %d\n", numbers[i], numbers[i] * numbers[i]);
    }

    fclose(file);
    free(numbers);

    return 0;
}
  



