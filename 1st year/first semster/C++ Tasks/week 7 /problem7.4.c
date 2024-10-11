#include <stdio.h>
#include <ctype.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/

// Function to print the string in uppercase
void printUppercase(char *s)
{
    int j = 0;
    char ch;
    
    // Iterate through each character of the string
    while (s[j]) {
        ch = s[j];
        putchar(toupper(ch)); // Convert the character to uppercase and print
        j++;
    }
    printf("\n"); // Print a newline after the transformed string
}

// Function to print the string in lowercase
void printLowercase(char s[])
{
    int j = 0;
    char ch;
    
    // Iterate through each character of the string
    while (s[j]) {
        ch = s[j];
        putchar(tolower(ch)); // Convert the character to lowercase and print
        j++;
    }
    printf("\n"); // Print a newline after the transformed string
}

// Function to invert the case of each character in the string
void changeCase(char s[])
{
    int i;
    char c = ' ';
    
    // Iterate through each character of the string
    for (i = 0; s[i] != '\0'; i++)
    {
        c = s[i];
        
        // Check if character is lowercase, convert to uppercase; else if uppercase, convert to lowercase
        c = (c >= 'a' && c <= 'z') ? c - 32 : (c >= 'A' && c <= 'Z') ? c + 32 : c;
        printf("%c", c); // Print the transformed character
    }
    printf("\n"); // Print a newline after the transformed string
}

int main(void) {
    char str[100];  // Buffer to store the input string
    int choice;     // To store user's choice of transformation
    
    // Array of function pointers to the three functions
    void (*fun_ptr_arr[])(char*) = {printUppercase, printLowercase, changeCase};
    
    // Read the input string until newline
    scanf("%[^\n]%*c", str);
    
    // Continuously read the choice until the user chooses to exit (4)
    while(1) {
        scanf("%d", &choice);
        
        if(choice == 4)
            break; // Exit the loop
        
        // Call the appropriate function based on the choice
        (*fun_ptr_arr[choice-1])(str);
    }
    
    return 0;
}
