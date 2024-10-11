#include <stdio.h>
#include <stdio.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
int main() {
    char ch;
    int n;

    scanf(" %c", &ch);  

    scanf("%d", &n); 

    
    printf("here are the characters: \n ");

    for (int i = 0; i <= n; i++) {
        
        printf("%c\n ", ch - i); 
    }
     //i added a loop that counts from 0 to n
    
      printf("\n");
     // i added printf("\n") to make the characters look nice and in order
    return 0;
}