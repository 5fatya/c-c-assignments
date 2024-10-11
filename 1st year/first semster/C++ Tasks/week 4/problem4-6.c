#include <stdio.h>
#include <stdlib.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
void find_2greatest(int* arr, int numCount)
{
    int great1 = arr[0];
    int great2 = arr[1];

    
    if (great1 < great2)
    {
        great1 = arr[1];
        great2 = arr[0];
    }

    //start iteration at index 2 since we already stored index 0 and 1
    //into our great1 and great2 variables
    for (int i = 2; i < numCount; i++)
    {
        //if a value at index i is greater than our great1 variable
        //we set great1 to this value and set great2 to the previous
        
        if (arr[i] > great1)
        {
            great2 = great1;
            great1 = arr[i];
        }
        else if (arr[i] > great2 && arr[i] != great1)
        {
            great2 = arr[i];
        }
    }

    //print the 2 greatest numbers
    printf("The greatest number in the array is %d\n", great1);
    printf("The second greatest number in the array is %d\n", great2);
}

int main()
{
    int *array, numCount;

    printf("enter the number of integers to read\n");
    scanf("%d", &numCount);

    //dynamically allocate memory for our array
    array = (int*) malloc(sizeof(int) * numCount);

    printf("enter the numbers\n");

    
    for (int i = 0; i < numCount; i++)
    {
        scanf("%d", &array[i]);
    }

    find_2greatest(array, numCount);

    //empty the memory held by our dynamic array
    free(array);
}

