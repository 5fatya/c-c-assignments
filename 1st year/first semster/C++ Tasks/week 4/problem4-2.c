#include <stdio.h>
#include <string.h>
 /* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
int main() {
    
//i declared a string that has maximum 50 characters    
    char string_1[50];
 

//using scanf to make it possible to read after the spaces
    scanf("%[^\n]s",string);
 

    int length_of_s = strlen(string);
 

    for (int i = 0; i < length_of_s ; i++) {    //to make a zigzag form
        
         printf("%c\n",string[i]);
         
//avoid the redundant space after the string
     if(i % 2 == 0 && i < length_of_s -1) {
            printf(" ");
    }
    }
    return 0;
}
