#include <stdio.h>
#include <stdlib.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/


typedef struct Node {
    char data;
    struct Node *prev;
    struct Node *next;
} Node;

// Created a new node with given data
Node* create_node(char input) {
    Node *new_node = (Node*)malloc(sizeof(Node));
    new_node->data = input;
    new_node->prev = NULL;
    new_node->next = NULL;
    return new_node;
}

// Added a new node at the start of the list
void add_to_beginning(Node **head, char input) {
    Node *new_node = create_node(input);
    if (*head != NULL) {
        new_node->next = *head;
        (*head)->prev = new_node;
    }
    *head = new_node;
}

// Removed all nodes with a specific value
void remove_all(Node **head, char input) {
    Node *current = *head;
    int found = 0;
    
    while (current) {
        if (current->data == input) {
            found = 1;
            if (current->prev) {
                current->prev->next = current->next;
            } else {
                *head = current->next;
            }
            if (current->next) {
                current->next->prev = current->prev;
            }
            Node *to_delete = current;
            current = current->next;
            free(to_delete);
        } else {
            current = current->next;
        }
    }
    
    if (!found) {
        printf("The element is not in the list!\n");
    }
}

// Print the list in forward order
void print_list(Node *head) {
    Node *current = head;
    while (current) {
        printf("%c ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Print the list in reverse order
void print_list_reverse(Node *head) {
    Node *current = head;
    // Go to the last node
    while (current && current->next) {
        current = current->next;
    }
    // Print in reverse
    while (current) {
        printf("%c ", current->data);
        current = current->prev;
    }
    printf("\n");
}

// Free the memory of all nodes
void free_list(Node **head) {
    Node *current = *head;
    while (current) {
        Node *next_node = current->next;
        free(current);
        current = next_node;
    }
    *head = NULL;
}

int main() {
    Node *head = NULL;  // Initialize empty list
    int command;
    char input;

    while (1) {
        scanf("%d", &command);
        // Used a switch-case to determine what action to perform
        switch (command) {
            case 1:
                scanf(" %c", &input);
                add_to_beginning(&head, input);
                break;
            case 2:
                scanf(" %c", &input);
                remove_all(&head, input);
                break;
            case 3:
                print_list(head);
                break;
            case 4:
                print_list_reverse(head);
                break;
            case 5:
                free_list(&head);
                return 0;  
        }
    }
}

