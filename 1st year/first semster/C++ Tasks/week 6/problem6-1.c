#include <stdio.h>

/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/

/*The syntax includes “#define” 
followed by “macro name” and at last “the value of macro”*/
// Define a macro to swap two values of type T
#define SWAP(num1, num2, T) \
{ \
  T temp = num1; \
  num1 = num2; \
  num2 = temp; \
}

int main()
{
  int n1, n2;
  double d1, d2;

  
  scanf("%d%d", &n1, &n2);
  
  scanf("%lf%lf", &d1, &d2);
  

  // use the SWAP macro to swap values
  SWAP(n1, n2, int);
  SWAP(d1, d2, double);



  printf("After swapping:\n");
  printf("%d\n%d\n%.6lf\n%.6lf\n", n1, n2, d1, d2);

  return 0;
}


