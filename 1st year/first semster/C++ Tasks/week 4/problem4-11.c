#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
int count_insensitive(char *str, char c){
    int count=0;
    char lowercasec=tolower(c);
    for(int i=0;str[i]!='\0';i++){/*string is until there is '\0'*/
       if(tolower(str[i])==lowercasec){
           count ++;
       }
    }
    
    return count;
}

int main()
{
    char input=(char)malloc(sizeof(char)*51);
    if(input==NULL){
        exit(1);
    }
    /*we dmalloc the input_char and then input it*/
    printf("Enter string with 50 chars max:");
    scanf("%50s",input);
    
    char chars_we_count[]={'b','H','8','u','$'};
    /*we assign the chars we count to one char as elements of array*/
    for(int i=0;i<5;i++){
        char c=chars_we_count[i];/*and char c will each time equal to elements of array*/
        int count=count_insensitive(input,c);/*we recall our function to calculate it*/
        printf("char %c appears %d times\n",c,count);
    }
    
    free(input);
    return 0;
}