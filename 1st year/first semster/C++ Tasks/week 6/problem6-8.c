#include <stdio.h>
#include <stdlib.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/

// Define the node structure
struct node {
    int data;
    struct node *next;
};

// Function to append a value to the end of the linked list
void append(struct node **head, int data) {
    struct node *newNode = malloc(sizeof(struct node));
    struct node *last = *head;

    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    while (last->next != NULL) {
        last = last->next;
    }
    last->next = newNode;
}

// Function to prepend a value to the beginning of the linked list
void prepend(struct node **head, int data) {
    struct node *newNode = malloc(sizeof(struct node));

    newNode->data = data;
    newNode->next = *head;

    *head = newNode;
}

// Function to remove the first element of the linked list
void removeFirst(struct node **head) {
    if (*head == NULL) {
        return;
    }

    struct node *temp = *head;
    *head = (*head)->next;
    free(temp);
}

// Function to print the linked list
void printList(struct node *head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    struct node *head = NULL;
    char command;
    int data;

    while (1) {
        scanf(" %c", &command);  // Added space to consume whitespace characters

        switch (command) {
            case 'a':
                scanf("%d", &data);
                append(&head, data);
                break;
            case 'b':
                scanf("%d", &data);
                prepend(&head, data);
                break;
            case 'r':
                removeFirst(&head);
                break;
            case 'p':
                printList(head);
                break;
            case 'q':
                while (head != NULL) {
                    removeFirst(&head);
                }
                return 0;
            default:
                break;
        }
    }

    return 0;
}
