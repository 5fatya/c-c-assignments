#include <stdio.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
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
