// This is an inclusion guard. It ensures that the content of the header 
// file is only included once, preventing double inclusion issues.
#ifndef _QUEUE_H_
#define _QUEUE_H_
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/


// Define the Item as an integer type. This can be changed later 
// if the data type of items in the queue needs to be different.
typedef int Item;

// Define the maximum size of the queue.
#define MAXQUEUE 10

// Node structure for each item in the queue. 
typedef struct node
{
    Item item;               // Data item
    struct node* next;       // Pointer to the next node in the queue
} Node;

// Queue structure, which consists of pointers to the front and rear nodes,
// as well as an integer to keep track of the number of items in the queue.
typedef struct queue
{
    Node* front;             // Pointer to the front of the queue
    Node* rear;              // Pointer to the rear of the queue
    int items;               // Number of items in the queue
} Queue;

// Function to initialize the queue.
void initialize_queue(Queue* pq);

// Function to check if the queue is full.
int queue_is_full(const Queue* pq);

// Function to check if the queue is empty.
int queue_is_empty(const Queue* pq);

// Function to return the count of items in the queue.
int queue_item_count(const Queue* pq);

int enqueue(Item item, Queue* pq);
int dequeue(Item* pitem, Queue* pq);
void empty_queue(Queue* pq);
void printq(const Queue* pq);


#endif

