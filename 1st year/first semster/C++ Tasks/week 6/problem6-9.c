#include <stdio.h>
#include <stdlib.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
struct node {
    int data;
    struct node* next;
};

// Function to add at the beginning
void add_beginning(struct node** head, int data) {
    struct node* new_node = (struct node *) malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}

// Function to add at the end
void add_end(struct node** head, int data) {
    struct node* new_node = (struct node *) malloc(sizeof(struct node));
    struct node* last = *head;
    new_node->data = data;
    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;
        return;
    }

    while (last->next != NULL) {
        last = last->next;
    }
    last->next = new_node;
}

// Function to delete at the beginning
void delete_beginning(struct node** head) {
    if (*head == NULL) return;
    struct node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

// Function to insert at a specific position
void insert_at_position(struct node** head, int pos, int data) {
    struct node* new_node = (struct node *) malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;

    if (pos == 0) {
        new_node->next = *head;
        *head = new_node;
        return;
    }

    struct node* temp = *head;
    for (int i = 0; temp != NULL && i < pos - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        printf("Invalid position!\n");
        free(new_node);
        return;
    }

    new_node->next = temp->next;
    temp->next = new_node;
}

// Function to reverse the linked list
void reverse(struct node** head) {
    struct node *prev = NULL, *current = *head, *next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}

// Function to print the linked list
void print_list(struct node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    struct node* head = NULL;
    char cmd;

    // Start an infinite loop to continuously accept user commands
while (1) {
    
    scanf("%c", &cmd);
    
    // Switch statement to decide which action to perform based on user's command
    switch (cmd) {
        case 'b': { // Command to add at the beginning
            int data;
            // Read the data value to be added
            scanf("%d", &data);
            // Call function to add data at the beginning of the list
            add_beginning(&head, data);
            break;
        }
        case 'a': { // Command to add at the end
            int data;
            // Read the data value to be added
            scanf("%d", &data);
            // Call function to add data at the end of the list
            add_end(&head, data);
            break;
        }
        case 'p': { // Command to print the list
            // Call function to display the entire list
            print_list(head);
            break;
        }
        case 'r': { // Command to remove from the beginning
            // Call function to remove the first element of the list
            delete_beginning(&head);
            break;
        }
        case 'i': { // Command to insert at a specific position
            int pos, data;
            // Read the desired position and data value to be inserted
            scanf("%d %d", &pos, &data);
            // Call function to insert data at the specified position in the list
            insert_at_position(&head, pos, data);
            break;
        }
        case 'R': { // Command to reverse the list
            // Call function to reverse the order of elements in the list
            reverse(&head);
            break;
        }
        case 'q': { // Command to quit the program
            // Free the memory used by the list
            while (head != NULL) {
                struct node* temp = head;
                head = head->next;
                free(temp);
            }
            
            exit(0);
        }
    }
}


    return 0;
}

