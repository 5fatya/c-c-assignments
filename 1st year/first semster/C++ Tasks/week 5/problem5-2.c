#include <stdio.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
// wrote this function to divide each element in the array by 5 
void divby5(float arr[], int size){
int i;
for(i=0;i< size;++i)
arr[i] = arr[i] / 5 ;
}
int main()
{
float arr[] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36} ;  /*Declare an array of float values*/ 


printf("Before:\n"); // Print the original array before division
int i ;

for(i = 0; i < size; i++)

printf("%.3f\t", arr[i]);

printf("\n");

divby5(arr, size);   // divby5 function to divide each element by 5

printf("After:\n");   //Print array after the division

for(i = 0; i < size; ++i)

printf("%.3f\t", arr[i]);

printf("\n");
return 0;
}