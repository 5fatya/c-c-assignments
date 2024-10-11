#include <stdio.h>
#include "queue.h" 
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/

int main()
{
    Queue line;     // Declare a queue named 'line'.
    Item temp;      // Temporary variable to store items for enqueue or dequeue.
    char ch;        // Character variable to store user's choice.

    initialize_queue(&line); // Initialize the queue.

    // Loop until the user enters 'q' or the end of file is reached.
    while (((ch = getchar()) != EOF) && (ch != 'q'))
    {
        switch (ch) 
        {
            case 'a':   
                printf("add int:");
                scanf("%d", &temp);   // Read an integer from the user.
                if (!queue_is_full(&line))  // If the queue is not full.
                {
                    printf("Putting %d into queue\n", temp);
                    enqueue(temp, &line);  
                }
                else
                    puts("Queue is full");
                break;

            case 'd':   
                if (queue_is_empty(&line))   // If the queue is empty.
                    puts("Nothing to delete!");
                else
                {
                    dequeue(&temp, &line);   // Remove an item from the queue.
                    printf("Removing %d from queue\n", temp);
                }
                break;
                case 'p': // If the user wants to print the queue
                printq(&line); // Call the printq function to print the queue
                break;


             default:  // User entered something other than 'a', 'd', or 'q'.
                printf("%d items in queue\n", queue_item_count(&line));
                puts("Type a to add, d to delete, q to quit:");
        }
    }
    





    empty_queue(&line);  
    puts("Bye.");
    return 0;
}
