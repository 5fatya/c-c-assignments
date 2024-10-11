#ifndef LINKED_LIST_H
#define LINKED_LIST_H
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/

struct node {
    int data;
    struct node *next;
};

/*declare of a function that specifies the function’s name 
and type signature*/
void add_beginning(struct node **head, int data);
void add_end(struct node **head, int data);
void print_list(struct node *head);
void delete_beginning(struct node **head);

#endif
