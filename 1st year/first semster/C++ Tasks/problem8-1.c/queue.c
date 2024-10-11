#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/

// Function to initialize the queue
void initialize_queue(Queue* pq) {
    pq->front = NULL;
    pq->rear = NULL;
    pq->items = 0;
}

// Function to check if the queue is full
int queue_is_full(const Queue* pq) {
    return pq->items == MAXQUEUE;
}

// Check if the queue is empty
int queue_is_empty(const Queue* pq)
{
    return pq->items == 0;         // Return true if no items in queue
}

// Return the number of items in the queue
int queue_item_count(const Queue* pq)
{
    return pq->items;              // Return the count of items
}

// Add an item to the end of the queue
int enqueue(Item item, Queue* pq)
{
    Node* newPtr;

    // Allocate memory for new node. Return -1 if allocation fails
    if (!(newPtr = (Node*)malloc(sizeof(Node))))
        return -1;

    newPtr->item = item;          // Set the item data
    newPtr->next = NULL;          // Set next pointer to NULL

    if (pq->items == 0)
        pq->front = newPtr;       // If queue is empty, set front to new node
    else
        pq->rear->next = newPtr;  // Else, link the last node to the new node

    (pq->items)++;                // Increase the item count
    pq->rear = newPtr;            // Update the rear pointer
    return 0;
}

// Remove an item from the front of the queue
int dequeue(Item* pitem, Queue* pq) 
{
    Node* deleteLoc;

    if (!pq->items)
        return -1;

    *pitem = pq->front->item;     // Set the data to be returned
    deleteLoc = pq->front;        // Store the location to be deleted
    pq->front = pq->front->next;  // Move the front pointer

    free(deleteLoc);              // Free the memory of the dequeued item

    pq->items--;                  // Decrease the item count

    if (pq->items == 0)
        pq->rear = NULL;          // If the queue is now empty, reset the rear pointer

    return 0;
}

// Empty the entire queue
void empty_queue(Queue* pq)
{
    Item dummy;
    while (!queue_is_empty(pq))
        dequeue(&dummy, pq);   // Keep dequeuing until the queue is empty
}

void printq(const Queue *pq) {
    // Assuming Node is the data structure for 
    //queue elements and it has an 'int' data field
    Node *current = pq->front;
    while (current != NULL) {
        printf("%d", current->item); // Print the current item
        if (current->next != NULL) {
        
        }
        current = current->next;
    }
    printf("\n"); 
}
 

