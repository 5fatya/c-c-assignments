#include<stdio.h>
#include "stack.h"
#include<stdlib.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/

int main(){
    struct stack s;
    s.count = 0;
    
    
    while(true){
        char option;
        scanf(" %c", &option);  // Added space before %c to skip newline characters

        if(option == 's'){
            int number;
            scanf("%d", &number);
            push(&s, number);  // Pass address of s
            printf("Pushing \n%d", number);
        }
        else if(option == 'p'){
            printf("Popping\n ");
            int top_element = pop(&s);  // Pass address of s
            if(top_element != -1){
                printf("%d", top_element);
            }
            printf("\n");
        }
        else if(option == 'e'){
            printf("Emptying Stack\n ");
            empty(&s);  // Pass address of s
            printf("\n");
        }
        else if(option == 'q'){
            printf("Quit\n");
            exit(0);
        }
    }
}