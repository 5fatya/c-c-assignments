/*Language: C
We want to record the time a runner completes a lap.
Write the definition of the following function
void total time(int mins[], int secs[], int n, int *sum min, int *sum sec);
The function accepts two integer vectors containing the lap times in minutes and seconds, and then calculates the sum of all times. The sum expressed in minutes and seconds is copied into two locations pointed by sum_min and sum_sec.
You can assume that n is greater than 1.
The seconds part should not be higher than 59 
(thus convert the seconds to minutes if necessary after summing up).
*/

#include <stdio.h>

// Function to calculate the total time
// 'mins' and 'secs' are arrays containing minutes and seconds of lap times
// 'n' is the number of elements in the 'mins' and 'secs' arrays
// 'sum_min' and 'sum_sec' are pointers to store the total minutes and seconds
void total_time(int mins[], int secs[], int n, int *sum_min, int *sum_sec) {
    // Initialize the sums to zero
    *sum_min = 0;
    *sum_sec = 0;

    // Loop through each lap time
    for (int i = 0; i < n; i++) {
        *sum_min += mins[i]; // Add minutes of the current lap to the total minutes
        *sum_sec += secs[i]; // Add seconds of the current lap to the total seconds
    }

    // Convert total seconds to minutes and seconds
    *sum_min += *sum_sec / 60; // Convert excess seconds to minutes and add to total minutes
    *sum_sec %= 60;            // Keep the remaining seconds under 60
}

// Main function
int main() {
    // Example lap times in minutes and seconds
    int mins[] = {2, 1, 3}; 
    int secs[] = {30, 40, 45};
    int sum_min, sum_sec;

    // Call the function with the lap times
    total_time(mins, secs, 3, &sum_min, &sum_sec);

    // Print the total time
    printf("Total time: %d minutes and %d seconds\n", sum_min, sum_sec);

    return 0;
}
