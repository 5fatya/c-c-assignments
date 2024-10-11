#include <stdio.h>
/* CH-230-A
   Fatima Fares
   ffares@jacobs-university.de
*/
//Performing arithmetic operations with doubles from files

int main() {
    char file1_name[50], file2_name[50];
    double firstValue, secondValue, sumOfValues, differenceOfValues, productOfValues, quotientOfValues;

    // Prompting for the names of the two input files
    printf("Enter the name of the first input file: ");
    scanf("%s", file1_name);
    printf("Enter the name of the second input file: ");
    scanf("%s", file2_name);

    // Attempting to open the first input file for reading
    FILE *file1 = fopen(file1_name, "r");
    if (file1 == NULL) {
        perror("Error opening first input file");
        return -1;
    }

    // Attempting to open the second input file for reading
    FILE *file2 = fopen(file2_name, "r");
    if (file2 == NULL) {
        perror("Error opening second input file");
        fclose(file1); // Closing the first file before exiting
        return -1;
    }

    // Reading double values from the files
    fscanf(file1, "%lf", &firstValue);
    fscanf(file2, "%lf", &secondValue);

    // Closing the input files after reading
    fclose(file1);
    fclose(file2);

    // Performing arithmetic operations
    sumOfValues = firstValue + secondValue;
    differenceOfValues = firstValue - secondValue;
    productOfValues = firstValue * secondValue;
    quotientOfValues = firstValue / secondValue; // Division by zero should be handled if this is a possibility

    // Opening the output file to write the results
    FILE *results_file = fopen("results.txt", "w");
    if (results_file == NULL) {
        perror("Error creating results file");
        return -1;
    }

    // Writing the calculated results to "results.txt"
    fprintf(results_file, "Sum: %lf\n", sumOfValues);
    fprintf(results_file, "Difference: %lf\n", differenceOfValues);
    fprintf(results_file, "Product: %lf\n", productOfValues);
    fprintf(results_file, "Quotient: %lf\n", quotientOfValues);

    // Closing the output file
    fclose(results_file);

    // Indicating successful completion
    printf("Results have been written to 'results.txt'.\n");

    return 0;
}
