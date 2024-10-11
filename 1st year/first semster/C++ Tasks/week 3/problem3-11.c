#include <stdio.h>
#include <string.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
int main() {
    char one[100]; 
    char two[100]; 
    char result[100]; 

    printf("enter the first string: ");
    fgets(one, sizeof(one), stdin);
    one[strcspn(one, "\n")] = '\0'; 
    printf("enter the second string: ");
    fgets(two, sizeof(two), stdin);
    two[strcspn(two, "\n")] = '\0'; 

    
    printf("length of the first string: %zu\n", strlen(one));
    printf("length of the second string: %zu\n", strlen(two));

    strcpy(result, one); 
    strcat(result, two);
    printf("concatenation of the first and second strings: %s\n", result);

  
    strcpy(result, two);

     printf("copy of the second string: %s\n", result);

    
    int compareResult=strcmp(two, one);
    if (compareResult==0) {
        printf("the two strings are equal.\n");
    } else {
        printf("the two strings are not equal.\n");
    }

    char c;
    printf("enter a character to search in the second string: ");
    scanf(" %c", &c); 
    printf("enter a character to search in the second string: ");
    scanf(" %c", &c);
    char *position = strchr(two,c);
    if (position != NULL) {
        int index = position-two;
        printf("character '%c' found at position %d in the second string.\n", c, index);
    } else {
        printf("character '%c' not found in the second string.\n", c);
    }

    return 0;
}
