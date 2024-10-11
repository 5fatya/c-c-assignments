#include <iostream>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/

// Function definition for 'absolute_value'
// which calculates the absolute value of a float
float absolute_value(float x){
   if (x < 0){
       return -x;
   }
   return x;
}

int main()
{
   float x = -5.5;
   // Output the absolute value of x by calling 
   //the 'absolute_value' function
   std::cout << absolute_value(x) << std::endl;
   return 0;
}

