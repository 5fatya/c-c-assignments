#include <stdio.h>
#include <ctype.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
int main() {
    char character;
    scanf("%c", &character); // Note the space before %c to consume any whitespace or newline character.

    if (isdigit(character)) {
        printf("%c is a digit\n", character);
    } else if (isalpha(character)) {
        printf("%c is a letter\n", character);
    } else {
        printf("%c is some other symbol\n", character);
    }

    return 0;
}
