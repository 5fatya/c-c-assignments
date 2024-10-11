 #include <stdio.h>
#include <ctype.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/

//function to count consonants in a string using a pointer
int count_consonants(char *str) {
    int count = 0;
    while (*str) {
        char c = tolower(*str);
        if (isalpha(c) && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            count++;
        }
        str++; 
    }
    return count;
}
//next character
int main() {
    char inputString[100];

    while (1) {
        fgets(inputString, sizeof(inputString), stdin);

        if (inputString[0] == '\n') {
            break; /*exit if an empty line is entered*/
        }

        int consonantCount = count_consonants(inputString);
        printf("Number of consonants=%d\n", consonantCount);
    }

    return 0;
}

