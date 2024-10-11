#include <stdio.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
int main()
{
int n,i;
//input n that is size of array
scanf("%d",&n); 
//declare array arr with size n
float arr[n]; 
//value of aaray arr
for(i=0;i<n;i++) 
{
scanf("%f",&arr[i]);
}

float *p; //declare a pointer of type float
p=arr; //intialiaze pointer to address of first array element
i=0;

while(*p>=0) //check if value at pointer is greater than 0
{
++p; //increment pointer so it can point to next element of array
++i; //increment value of i it tracks how many element before first negative
}
printf("Before the first negative value: %d elements",i);
return 0;
}