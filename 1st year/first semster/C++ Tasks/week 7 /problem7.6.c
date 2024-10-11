#include <stdio.h>
#include <string.h>
#include <stdbool.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/

// Adding a structure to store person details
struct person {
    char name[30];  
    int age;        
};

// This function compares two persons based on their names
int compareByName(const struct person *a, const struct person *b) {
    // We use the strcmp function to compare two strings
    int nameComparison = strcmp(a->name, b->name);

    // If both names are the same, then we compare based on age
    if (nameComparison == 0)
        return a->age - b->age;

    // Otherwise, we return the result of the name comparison
    return nameComparison;
}

// This function compares two persons based on their ages
int compareByAge(const struct person *a, const struct person *b) {
    // If both ages are the same, then we compare based on name
    if (a->age == b->age)
        return strcmp(a->name, b->name);

    // Otherwise, we return the difference in age
    return a->age - b->age;
}

// This function sorts an array of persons using the Bubble Sort algorithm
void bubblesort(struct person arr[], int totalPersons, int (*compareFunc)(const struct person *, const struct person *)) {
    bool swapped;  // To check if we made any swaps
    struct person temp;  // Temporary variable used for swapping

    // Repeat until the array is sorted
    do {
        swapped = false;
        // Iterate over each pair of elements in the array
        for (int i = 1; i < totalPersons; i++) {
            // Compare two consecutive persons using the provided comparison function
            if (compareFunc(&arr[i - 1], &arr[i]) > 0) {
                // Swap them if they are in the wrong order
                temp = arr[i - 1];
                arr[i - 1] = arr[i];
                arr[i] = temp;
                swapped = true;  // Mark that we made a swap
            }
        }
    } while (swapped);  // Continue sorting until no more swaps are made
}

int main() {
    int numberOfPersons;  // Total number of persons to be read
    scanf("%d", &numberOfPersons);

    struct person personsList[numberOfPersons];  // Array to store details of all persons
    // Read details for each person
    for (int i = 0; i < numberOfPersons; i++) {
        scanf("%s", personsList[i].name);  // Read name
        scanf("%d", &personsList[i].age);  // Read age
    }

    // Sort the array based on names and then print
    bubblesort(personsList, numberOfPersons, compareByName);
    for (int i = 0; i < numberOfPersons; i++) {
        printf("{%s, %d}; ", personsList[i].name, personsList[i].age);
    }
    printf("\n");

    // Sort the array based on ages and then print
    bubblesort(personsList, numberOfPersons, compareByAge);
    for (int i = 0; i < numberOfPersons; i++) {
        printf("{%s, %d}; ", personsList[i].name, personsList[i].age);
    }
    printf("\n");

    return 0;  
}

