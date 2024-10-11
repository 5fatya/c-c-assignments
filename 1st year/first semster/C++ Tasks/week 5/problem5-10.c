#include <stdio.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/


// Recursive function to print numbers from n to 1
void print_numbers_recursive(int n) {
    
    if (n <= 0) return;    // If n is less than or equal to 0, return

   
    printf("%d\n", n);

   
    print_numbers_recursive(n - 1);
}

int main() {
    int n;

   
    printf("Enter a positive integer: ");
    scanf("%d", &n);

  
    print_numbers_recursive(n);

    return 0;
}