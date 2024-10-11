#include <stdio.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
int main() {
    double d1, d2;
    scanf("%lf", &d1);
    scanf("%lf", &d2);

    printf("sum of doubles=%lf\n", d1 + d2);

    // Step 3: Print the difference of the two doubles (first minus second)
    printf("difference of doubles=%lf\n", d1 - d2);

    // Step 4: Print the square of the first double
    printf("square=%lf\n", d1 * d1);

    // Step 5: Read two integers from the keyboard
    int int1, int2;
    scanf("%d", &int1);
    scanf("%d", &int2);
    // Step 6: Compute the sum and product of the two integers
    int sum_int = int1 + int2;
    int product_int = int1 * int2;

    // Step 7: Print the sum and product of the integers
    printf("sum of integers=%d\n", sum_int);
    printf("product of integers=%d\n", product_int);

    // Step 8: Read two chars from the keyboard
    char char1, char2;
    getchar();
    scanf("%c", &char1); 
    getchar();
    scanf("%c", &char2); /*Note the space before %c to consume 
    any leftover newline character
    */ 
   
   //Note the space before %c to consume any leftover newline character

    // Step 9: Compute the sum and product of the two chars
    int sum_char = char1 + char2;
    int product_char = char1 * char2;

    /*Step 10: Print the sum and product of the chars 
    as decimal values and as chars 
     */ 
   
    
    printf("sum of chars=%d\n", sum_char);
    printf("product of chars=%d\n", product_char);
    printf("sum of chars=%c\n", sum_char);
    printf("product of chars=%c\n", product_char);

    return 0;
    
    
//  // Printing sum and product as decimal values
    //printf("Sum of chars=%d\n", sum_char);
   // printf("Product of chars(Decimal)=%d\n", product_char);

    // Printing sum and product as characters
    // Note: The resulting characters might not be printable or could be special characters.
   // printf("Sum (Character): %c\n", sum_char);
   // printf("Product (Character): %c\n", product_char);
}


#include <stdio.h>

int main() {
    double a, b; 
    printf("Enter two double values: ");
    scanf("%lf %lf", &a, &b);

    printf("sum of doubles=%lf\n", a + b);
    printf("difference of doubles=%lf\n", a - b);
    printf("square=%lf\n", a * a);

    int c, d;
    printf("Enter two integer values: ");
    scanf("%d %d", &c, &d);

    int sum_int = c + d; // Sum of the integers
    int product_int = c * d; // Product of the integers

    printf("sum of integers=%d\n", sum_int);
    printf("product of integers=%d\n", product_int);

    char char1, char2;
    printf("Enter two characters: ");
    scanf(" %c %c", &char1, &char2); // The space before %c skips any whitespace

    int sum_char = char1 + char2;
    int product_char = char1 * char2;

    printf("sum of chars=%d\n", sum_char);
    printf("product of chars=%d\n", product_char);
    printf("sum of chars as char=%c\n", sum_char);
    printf("product of chars as char=%c\n", product_char);

    return 0;
}

