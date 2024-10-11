/*Language: C
It is suggested that passwords mix letters and digits such that
 passwords are not that easy to guess.
  A good password must have at least a minimum length of 8 characters 
  and needs to contain at least three digits.
Please write a function as a password checker 
which get an array of characters as parameter 
and determines whether 
the password is good or not by returning 
true or false, respectively.*/
#include <stdio.h>
#include <stdbool.h> // Include for using bool type
#include <string.h>  // Include for using strlen

// Function to check if a password is good
bool isGoodPassword(const char password[]) {
    int length = strlen(password);
    if (length < 8) {
        return false; // Password too short
    }

    int digitCount = 0;
    for (int i = 0; i < length; i++) {
        if (password[i] >= '0' && password[i] <= '9') {
            digitCount++;
        }
    }

    return digitCount >= 3; // Return true if there are at least 3 digits
}

int main() {
    char password[100];

    printf("Enter your password: ");
    scanf("%99s", password); // Read the password

    if (isGoodPassword(password)) {
        printf("Password is good.\n");
    } else {
        printf("Password is not good.\n");
    }

    return 0;
}
