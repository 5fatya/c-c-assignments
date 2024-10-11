#include <iostream> 
using namespace std;
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/

// Function overload 'count' that 
//takes two integers and returns their difference
int count(int a, int b){
  	return b - a; // Return the difference between b and a
}

// Function overload 'count' that takes a character and a string
// It returns the number of times the character appears in the string
int count(char c, string s){
	int n = s.length(); // Get the length of the string
	int char_count = 0; // Initialize a counter for occurrences of c

	// Loop over each character in the string
	for(int i = 0; i < n; i++){
		// If the current character matches c, increment the counter
		if(s[i] == c)
		char_count++;
	}

	return char_count; // Return the total count of c in the string
}

int main(){
	// Call the first 'count' function overload with integers 7 and 3
	// and output the result, which will be -4
	cout << count(7, 3) << endl;

	// Call the second 'count' function overload with the character 'i'
	// and the string "this is a string" and output the result, which will be 3
	cout << count('i', "this is a string") << endl;

	return 0; 
}
