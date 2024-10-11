/*Language: C
Write the definition of the following function
int substitute_vowels(char ∗s, char ch);
A vowel is one of the letters a, e, i, o, u (it is sufficient to just substitute lowercase char- acters). The function takes a string and replaces all vowels with the given character ch. The function returns the number of replacements done. If a vowel is replaced by the same character, it still counts as a replacement.
You will receive a bonus point if you walk the string using pointers.
Thus the following (incomplete) piece of code
char s[] = "This is a sentence";
printf("%s\n", s);
n = substitute_vowels(s, ’o’);
printf("%s\n", s)
printf("%d\n", n);
will print
Thos os o sontonco
6
You may not use any predefined functions from string.h in your program.*/

#include <stdio.h>

int substitute_vowels(char *s, char ch) {
    int count = 0;
    char *ptr = s; // Pointer to traverse the string

    // Loop through the string until we reach the end
    while (*ptr != '\0') {
        // Check if the current character is a vowel
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u') {
            *ptr = ch; // Replace the vowel with ch
            count++;   // Increment the replacement count
        }
        ptr++; // Move to the next character
    }

    return count;
}

int main() {
    char s[] = "This is a sentence";
    printf("%s\n", s);

    int n = substitute_vowels(s, 'o');
    printf("%s\n", s);
    printf("%d\n", n);

    return 0;
}
