/*
 A matrix Language: C
Consider (do not write) a program that creates a matrix of r rows and c columns and then ini- tializes it with values that are read from a file. Then the matrix is printed to the screen.
Write a program fragment which reads the data from a file named matrix.dat, which contains the number of rows in the first line, the number of columns in the second line, then values are given for given rows and columns (see input structure and example below).
Also implement and call a function to print the matrix where the prototype looks like this:
void print_matrix(int ∗∗A, int rows, int cols) 
Input structure
4
3 
1 1 3 
2 2 5
The given input creates are 4 by 3 matrix and sets 1,1 to 3 and 2,2 to 5.
(3 0 0) 
(0 5 0) 
(0 0 0)
(0 0 0)
*/

#include <stdio.h>
#include <stdlib.h>

// Define the node structure as provided
struct node {
    char str[20];       // To store the string
    struct node* next;  // Pointer to the next node
};

// Function to insert a new node at the beginning of the list
struct node* insertBegin(struct node *head, char str[]) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    if (newNode == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    strcpy(newNode->str, str);
    newNode->next = head;
    return newNode;
}

// Function to print the list
void printList(struct node *head) {
    struct node *current = head;
    while (current != NULL) {
        printf("%s ", current->str); // Print the string
        current = current->next;     // Move to the next node
    }
    printf("\n"); // Print a newline at the end
}

int main() {
    struct node* head = NULL; // Start with an empty list
    int n;
    char tempStr[20];

    // Read the number of strings
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    getchar(); // Consume the newline character

    // Insert strings into the list and print after each insertion
    for(int i = 0; i < n; i++) {
        printf("Enter string %d: ", i+1);
        scanf("%19s", tempStr); // Read a string from standard input
        head = insertBegin(head, tempStr); // Insert it into the list
        printList(head); // Print the list after each insertion
    }

    // Free the allocated memory
    struct node *tmp;
    while (head != NULL) {
        tmp = head;
        head = head->next;
        free(tmp);
    }

    return 0;
}


