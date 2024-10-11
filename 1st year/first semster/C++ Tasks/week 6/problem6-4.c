#include <stdio.h>
#include<stdlib.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
//Dynamically allocating memory for the two vectors
int main()
{
    int n, i,sum=0, product;
    scanf("%d",&n); //reading length of vectors from user
    int* x = malloc((n) * sizeof(int));
    
    for(i=0;i<n;i++) //loop runs n times to read vector x values
     scanf("%d",&x[i]);
    
    int* y = malloc((n) * sizeof(int));
    for(i=0;i<n;i++) //loop runs n times to read vector y values
     scanf("%d",&y[i]);
    
    printf("The intermediate product values are: \n");
    for(i=0;i<n;i++) //loop runs n times to find the Scalar product
    {
        product = x[i]*y[i];
        sum+= product;
        printf("%d\n",product); //printing intermediate values
    }
    printf("The scalar product is: %d\n",sum); //printing scalar product
    

    return 0;
}
