/*Explanation:
1.Declaration of Variables:
An array numbers to store 5 integers.
A pointer ptr that points to the array.
An integer sum to hold the sum of the numbers.
A loop variable i.

2.Reading from Keyboard Using Pointers:
A for loop is used to iterate 5 times.
scanf reads an integer from the keyboard and stores it in the array. 
The expression ptr + i calculates the address of the i-th element of the array.

3.Calculating Sum Using Pointers:
Another for loop iterates over the array.
sum is incremented by the value pointed to by ptr + i. 
The expression *(ptr + i) dereferences the pointer to get the value at the i-th element of the array.

4.Printing the Result:
Finally, the sum of the entered numbers is printed.
*/

#include <stdio.h>

int main() {
    int numbers[5]; // Array to store 5 integers
    int *ptr = numbers; // Pointer to the array
    int sum = 0; // Variable to store the sum of the numbers
    int i; // Loop variable

    // Reading 5 integers from the keyboard and storing them in the array
    printf("Enter 5 integers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", ptr + i); // Using pointer arithmetic to store each integer
    }

    // Calculating the sum of the integers using a pointer
    for(i = 0; i < 5; i++) {
        sum += *(ptr + i); // Using pointer arithmetic to access each integer
    }

    // Printing the sum
    printf("The sum of the entered numbers is: %d\n", sum);

    return 0;
}
