/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

typedef struct Node {
    char input;
    struct Node *prev;
    struct Node *next;
} Node;

Node* create_node(char input);
void add_to_beginning(Node **head, char input);
void remove_all(Node **head, char input);
void print_list(Node *head);
void print_list_reverse(Node *head);
void free_list(Node **head);

#endif // DOUBLY_LINKED_LIST_H

