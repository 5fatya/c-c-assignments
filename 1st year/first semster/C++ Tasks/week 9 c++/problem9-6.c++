#include <iostream>
#include <cctype> // Include cctype library for character handling functions
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/

using namespace std;

// Function to find the first positive and even integer in an array
int myfirst(int arr[], int size) {
    // Loop through each element of the array
    for (int i = 0; i < size; ++i) {
        // Check if the current element is positive and even
        if (arr[i] > 0 && arr[i] % 2 == 0) {
            return arr[i]; // Return the element if it matches the condition
        }
    }
    return -1; // Return -1 if no matching element is found
}

// Function to find the first negative 
//double that has no fractional part in an array
double myfirst(double arr[], int size) {
    // Loop through each element of the array
    for (int i = 0; i < size; ++i) {
        // Check if the current element is negative and has no fractional part
        if (arr[i] < 0 && static_cast<int>(arr[i]) == arr[i]) {
            return arr[i]; // Return the element if it matches the condition
        }
    }
    return -1.1; // Return -1.1 if no matching element is found
}

// Function to find the first consonant in a character array
char myfirst(char arr[], int size) {
    // Loop through each element of the array
    for (int i = 0; i < size; ++i) {
        char lower = tolower(arr[i]); // Convert character to lowercase
        // Check if the character is a letter and not a vowel
        if (isalpha(lower) && lower != 'a' && lower != 'e' && lower != 'i' && lower != 'o' && lower != 'u') {
            return arr[i]; // Return the character if it is a consonant
        }
    }
    return '0'; // Return '0' if no consonant is found
}

int main() {
    // Test arrays for each function
    int integers[] = { -4, 3, 6, 7 }; // Array of integers
    double doubles[] = { -3.0, -2.5, -1.1, 0.0 }; // Array of doubles
    char chars[] = { 'a', 'e', 'i', 'm', 'n' }; // Array of characters

    // Calling the functions with the test arrays and printing the results
    cout << "First positive and even integer: " << myfirst(integers, 4) << endl;
    cout << "First negative element without a fractional part: " << myfirst(doubles, 4) << endl;
    cout << "First consonant: " << myfirst(chars, 5) << endl;

    return 0; // End of the main function
}


