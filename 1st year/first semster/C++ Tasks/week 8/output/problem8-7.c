#include <stdio.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
int main() {
    FILE *f1, *f2, *outputFile; // File pointers
    double value1, value2, addition, subtraction, multiplication, quotient;

    char firstFile[100], secondFile[100];

    // Prompt user for file names
    printf("Provide the filename of the first input: ");
    scanf("%s", firstFile);

    printf("Provide the filename of the second input: ");
    scanf("%s", secondFile);

    // Access and read the numbers from provided files
    f1 = fopen(firstFile, "r");
    f2 = fopen(secondFile, "r");

    fscanf(f1, "%lf", &value1);
    fscanf(f2, "%lf", &value2);

    // Done reading, close the files
    fclose(f1);
    fclose(f2);

    // Execute arithmetic operations
    addition = value1 + value2;
    subtraction = value1 - value2;
    multiplication = value1 * value2;
    quotient = value1 / value2;  // Assuming the second number is non-zero

    // Store the calculated results in "results.txt"
    outputFile = fopen("results.txt", "w");
    fprintf(outputFile, "Addition: %lf\n", addition);
    fprintf(outputFile, "Subtraction: %lf\n", subtraction);
    fprintf(outputFile, "Multiplication: %lf\n", multiplication);
    fprintf(outputFile, "Quotient: %lf\n", quotient);

    // Finish writing, close the file
    fclose(outputFile);

    printf("Computed results have been stored in results.txt.\n");

    return 0;
}
