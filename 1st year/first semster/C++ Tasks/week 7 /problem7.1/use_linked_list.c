/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main() {
    // Initialize an empty linked list
    struct node *head = NULL;
    
    // Command character to store user input commands
    char cmd;

    // Main loop to keep reading and processing commands
    while (1) {
        scanf("%c", &cmd);
        switch (cmd) {
            // Add a new node at the beginning of the linked list
            case 'b': {
                int data;  // Value to be inserted
                scanf("%d", &data);
                add_beginning(&head, data);
                break;
            }
            
            // Add a new node at the end of the linked list
            case 'a': {
                int data;  // Value to be inserted
                scanf("%d", &data);
                add_end(&head, data);
                break;
            }
            
            // Print all elements of the linked list
            case 'p': {
                print_list(head);
                break;
            }
            
            // Remove the first node of the linked list
            case 'r': {
                delete_beginning(&head);
                break;
            }
            
            // Free all nodes and exit the program
            case 'q': {
                // Free memory for each node in the list
                while (head != NULL) {
                    struct node* temp = head;
                    head = head->next;
                    free(temp);
                }
                exit(0);
            }
        }
    }
    
    // Although the program will mostly exit via 'q' command,
    // still, a return statement is added for good practice.
    return 0;
}

