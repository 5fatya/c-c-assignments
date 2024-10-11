#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

typedef struct Node {
    char data;
    struct Node *prev;
    struct Node *next;
} Node;

Node* create_node(char data);
void add_to_beginning(Node **head, char data);
void remove_all(Node **head, char data);
void print_list(Node *head);
void print_list_reverse(Node *head);
void free_list(Node **head);

#endif // DOUBLY_LINKED_LIST_H
