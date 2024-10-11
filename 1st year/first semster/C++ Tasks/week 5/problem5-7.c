 #include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* CH-230-A
   (problem2-1.c)
   Fatima Fares
   ffares@jacobs-university.de
*/

int main() {
    char str1[100], str2[100]; 

    
    scanf("%s", str1);

    // user will enter the second string
    scanf("%s", str2);

    // Calculate the length needed for the concatenated string
    int concatLength = strlen(str1) + strlen(str2);

    // Allocate memory for the concatenated string
    char *concatString = (char *)malloc(sizeof(char) * concatLength);

    // Concatenate the two input strings
    strcat(concatString, str1);
    strcat(concatString, str2);

    // Print the result of concatenation
    printf("Result of concatenation: %s", concatString);

    // Free the dynamically allocated memory to avoid memory leaks
    free(concatString);

    return 0;
}




