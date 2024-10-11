/* Problem 3.4 Wrong position 
Language: C
The program below should print the position of the f
irst occurrence of the character ’g’ within a string. 
You can safely assume that ’g’ will be contained in the string. 
Why does it always print the position 0? Fix the program such that it prints the correct position.
*/
#include <stdio.h>

// Updated position function to manually search for the character in the string
int position(char str[], char c) {
    int idx;
    
    for (idx = 0; str[idx] != '\0'; ++idx) {
        if (str[idx] == c) {
            return idx; 
        }
    }
    return -1; 
}

int main() {
    char line[80];
    while (1) {
        printf("enter string:\n");
        fgets(line, sizeof(line), stdin);
        
        // Replace '\n' with '\0' to avoid incorrect results when searching for the character
        for (int i = 0; line[i] != '\0'; i++) {
            if (line[i] == '\n') {
                line[i] = '\0';
                break;
            }
        }
         
        int result = position(line, 'g');
        if (result != -1) {
            printf("the first occurrence of 'g' is at position: %d\n", result);
        } else {
            printf("'g' not found in the string.\n");
        }
    }
    return 0;
}
