#include <stdio.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/

void printTraingle(int n, char ch) {
    int i, j;

    for (i = n; i >= 1; i--) {  /*adding this function 
    to start from 'n' and decrease*/ 
        for (j = 1; j <= i; j++) {
            // we add this function to print the characters without space
            printf("%c", ch); 
        }
        printf("\n");
    }
}

int main() {
    /*Number of rows in the triangle
    and Character to be printed
    */ 
    int n;  
    char ch;

    
    scanf("%d", &n);

    while (getchar() != '\n');
    scanf("%c", &ch);
// to make the function print the traingle
printTraingle(n, ch); 
    return 0;
}


