#include <iostream>
using namespace std;
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/

// Function to find the maximum value in the array
int find_max(int* arr, int size) {
    int max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Function to subtract the maximum value from all elements of the array
void subtract_max(int* arr, int size) {
    int max = find_max(arr, size);
    for (int i = 0; i < size; ++i) {
        arr[i] -= max;
    }
}

// Function to deallocate the array
void deallocate(int* arr) {
    delete[] arr;
}

int main() {
    int n;
    cout << "Enter the number of integers: ";
    cin >> n; // Reading the number of elements

// Dynamically allocate memory for the array
    int* a = new int[n]; 

    cout << "Enter the integers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i]; // Reading integers into the array
    }

    subtract_max(a, n); // Subtract the maximum value from all elements

    cout << "Modified array:" << endl;
    for (int i = 0; i < n; i++) {
        // Print each element of the modified array
        cout << a[i] << " "; 
    }
    cout << endl;

    deallocate(a); 
    return 0;
}
