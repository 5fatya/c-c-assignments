#include<iostream>
#include<vector>
#include<stdexcept>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
using namespace std;

int main() {
    vector<int> v(20, 8); // Create a vector named 'v' with 20 elements, all initialized to 8

    try {
        cout << v.at(20) << endl; // Try to access the 21st element of the vector (which is the 20th index)
    } catch (out_of_range &e) {
        cerr << "Caught an exception of type: " << e.what() << endl; // If the vector::at() method throws an out_of_range exception, 
        //catch it and print the type of the exception
    }

    return 0;
}