#include <stdio.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/

int main() {
    // Attempt to read from chars.txt
    FILE *sourceFile = fopen("chars.txt", "r");
    if (sourceFile == NULL) {
        printf("Unable to read chars.txt.\n");
        return 1;
    }

    // Grab two characters from the file
    char firstChar = fgetc(sourceFile);
    char secondChar = fgetc(sourceFile);

    // after reading the file, this function
    // close the source file
    fclose(sourceFile);

    // Sum the ASCII values of the two characters
    int totalAscii = firstChar + secondChar;

    // Prepare to write to codesum.txt
    FILE *destFile = fopen("codesum.txt", "w");
    if (destFile == NULL) {
        printf("Unable to write to codesum.txt.\n");
        return 1;
    }

    // Store the result in the destination file
    fprintf(destFile, "%d", totalAscii);

    // We're done writing, close the destination file
    fclose(destFile);

    printf("Stored ASCII value sum in codesum.txt.\n");

    return 0;
}