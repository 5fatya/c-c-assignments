/*Problem 3.9 Determine sum of two values in array
Language: C
Write a program which reads from the keyboard an integer value n followed by n double values as elements of an array with not more than 20 elements.
 Write also a function with the prototype: double sum25(double v[], int n);
which computes and returns the sum of the elements in v at position 2 and position 5. 
Check that positions 2 and 5 are valid within v, if not then print a corresponding message on the screen. 
In this case the function should return the value −111. Print the sum on the screen.
Your solution has to satisfy the requirements from the problem description 
and has to pass the following testcase and potentially other testcases which are uploaded. 
All characters are relevant for passing testcases including newlines and spaces.
Testcase 3.9: input
6
1.5
1.5
1.5
1.5
1.5
-1.5
Testcase 3.9: output
sum=0.000000
*/

#include <stdio.h>

// Function to calculate the sum of the 3rd and 6th elements in the array
double sum25(double v[], int n) {
    // Check if the array has at least 6 elements
    if (n < 5) {
        printf("One or both positions are invalid\n");
        return -111.0; // Return a special error value if not
    }
    
    // Calculate the sum of the 3rd (index 2) and 6th (index 5) elements
    double sum = v[2] + v[5];
    return sum; // Return the sum
}

int main() {
    int n; // Variable to store the number of elements to read
    scanf("%d", &n); // Read the number of elements
 
    // Check if there are at least 6 elements
    if (n < 6) {
        printf("One or both positions are invalid\n");
        return 1; // Exit the program if not
    }
 
    double v[20]; // Array to store the input values
 
    // Read `n` values into the array
    for (int i = 0; i < n; i++) {
        scanf("%lf", &v[i]);
    }
 
    // Calculate the sum of the 3rd and 6th elements
    double result = sum25(v, n);
    
    // Check if the result is not the error value
    if (result != -111.0) {
        printf("sum=%lf\n", result); // Print the sum if valid
    }
 
    return 0; 
}


