#include <stdio.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
// Function to count the number of lowercase characters in a string
int count_lower(char* str) {
    int count = 0;
    while (*str) {      
        if (*str >= 'a' && *str <= 'z') {   // Check if the character is lowercase
            count++;
        }
        str++;            // Move to the next character using pointer arithmetic
    }
    return count;
}

int main() {
    char input[51];     
    
    while (1) {           // Infinite loop to repeatedly read strings
        printf("enter a string (empty to exit): ");
        fgets(input, sizeof(input), stdin);  // Read the input string
        
        // Check for empty string (just contains '\n')
        if (input[0] == '\n') {
            break;         
        }

        // Print the result by calling count_lower
        printf("number of lowercase characters: %d\n", count_lower(input));
    }
    
    return 0; 
}