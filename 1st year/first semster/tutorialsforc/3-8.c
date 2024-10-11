/*Problem 3.8 Computing sum and average 
Language: C
Write a program where you can enter from the keyboard up to 10 floats. 
If the number entered is equal to −99.0, stop reading numbers from the keyboard and compute the sum 
and average of all values (excluding −99.0) using two functions (one for the sum and one for the average). 
Print your results on the screen.
You can safely assume that the input will be valid.
Make sure you consider all the cases: less than 10 numbers might be entered. 
After all the numbers have been entered you need to make sure that the sum and average are computed.
*/

#include <stdio.h>

#define MAX_NUMS 10

// Function to compute the sum of float array
float compute_sum(float arr[], int length) {
    float sum = 0.0;
    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function to compute the average of float array
float compute_average(float arr[], int length) {
    if (length == 0) {
        return 0; // To avoid division by zero
    }
    return compute_sum(arr, length) / length;
}

int main() {
    float numbers[MAX_NUMS];
    float number;
    int count = 0;

    printf("Enter up to 10 float numbers (enter -99.0 to stop):\n");

    while (count < MAX_NUMS) {
        scanf("%f", &number);
        if (number == -99.0) {
            break;
        }
        numbers[count++] = number;
    }

    float sum = compute_sum(numbers, count);
    float average = compute_average(numbers, count);

    printf("Sum: %f\n", sum);
    printf("Average: %f\n", average);

    return 0;
}


