/*Problem P.11 A linked list
Language: C
Consider (do not write) a program that reads strings from standard input (the keyboard) and adds them to the beginning of a linked list.
Write a function struct node* insertBegin (struct node *head, char strI]) that implements the insertion of elements into the list
Also write a function void printList (struct node *head) which prints the content of the list with spaces between the elements.
Use the following data structure:
struct node f
char str[201; struct node* next;
li
Running the program could look like the following:
Testcase: input
4
apple 
banana 
orange 
plum
Testcase: output
For simplicity there is a space after the last string in each row. 
apple 
banana apple 
orange banana apple 
plum orange banana apple
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure for a linked list node
struct node {
    char str[20];       // To store the string
    struct node* next;  // Pointer to the next node
};

// Function to insert a new node at the beginning of the list
// It takes a pointer to the current head of the list and the string to insert
struct node* insertBegin(struct node *head, char str[]) {
    // Allocate memory for the new node
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    if (newNode == NULL) { // Check if memory allocation was successful
        fprintf(stderr, "Error allocating memory.\n");
        exit(EXIT_FAILURE);
    }

    // Copy the string into the new node's str field
    strcpy(newNode->str, str);
    // Set the next pointer of the new node to the current head of the list
    newNode->next = head;
    // Return the new node, which is now the new head of the list
    return newNode;
}

// Function to print the linked list
// It takes a pointer to the head of the list
void printList(struct node *head) {
    struct node *current = head; // Start from the head
    // Loop through each node until we reach the end of the list
    while (current != NULL) {
        // Print the string of the current node followed by a space
        printf("%s ", current->str);
        // Move to the next node
        current = current->next;
    }
    // Print a newline at the end of the list
    printf("\n");
}

// Main function
int main() {
    struct node* head = NULL; // Initialize head to NULL, starting with an empty list
    int n;                    // Variable to store the number of strings
    char tempStr[20];         // Temporary string to hold input

    // Read the number of strings
    scanf("%d", &n);
    getchar(); // Consume the newline character after the number input

    // Insert strings into the list
    for(int i = 0; i < n; i++) {
        // Read a string from standard input
        scanf("%19s", tempStr);
        // Insert the string at the beginning of the list
        head = insertBegin(head, tempStr);
         printList(head); // Print the list after each insertion
    }


    // Free the allocated memory for the list
    struct node *tmp; // Temporary pointer for freeing nodes
    while (head != NULL) {
        tmp = head;       // Save the current head
        head = head->next; // Move head to the next node
        free(tmp);        // Free the saved (old) head
    }

    return 0; 
}
