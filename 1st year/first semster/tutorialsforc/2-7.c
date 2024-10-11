/*Problem 2.7 Infinite loop by bad coding 
Language: C
The program below prints
i is 8 i is 8 ...
(1 point)
Graded manually
until you stop the execution by pressing Ctrl-C. Fix the program s
uch that it prints 8, 7, 6, 5 and 4 as values for i.
#include <stdio.h>
int main()
{
    int i = 8;
    while (i >= 4)
        printf("i is %d\n", i);
        i--;
    printf("That’s it.\n");
    return 0;
}
*/


#include <stdio.h>

int main() {
    int i = 8;
    while (i >= 4) { // this starts the loop 
        printf("i is %d\n", i);
        i--;  // This needs to be inside the loop
    }
    printf("That's it.\n");
    return 0;
}
