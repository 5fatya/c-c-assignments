#include <stdio.h>
#include <math.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/


/* function to find highest number */
float highestNumber(float array[],int count)
{
    int i =0;
    float highest = array[0];  /*initialize highest number as index 0 element */
    for(i=1;i<count;i++)
    {
        if(array[i]>highest)       /*traverse array and replace highest element with array[i] 
                                   if it is less than array[i] */
            highest = array[i];
    }
    return highest;
}

/* function to find lowest number */
float lowestNumber(float array[],int count)
{
    int i =0;
    float lowest = array[0]; /*initialize lowest number as index 0 element */
    for(i=1;i<count;i++)
    {
        if(array[i]<lowest) /* traverse array and replace lowest element with array[i] if it is greater than array[i] */
            lowest = array[i];
    }
    return lowest;
}

/* function to find sum of all the elements of array */
float sum(float array[],int count)
{
    int i =0;
    float sum = 0;  /*initialize sum with 0*/
    for(i=0;i<count;i++) /* traverse array and add array[i] to sum*/
    {
        sum+=array[i];
    }
    return sum;
}

/* function to find geometric mean */
float geometricMean(float array[],int count)
{
    int i =0;
    float product = 1; /*initialize product with 1*/
    float gMean;
    for(i=0;i<count;i++) /*traverse array and to find product of all the elements*/
    {
        product *= array[i];
    }
    
    gMean = pow(product,(float)1/count); 
    return gMean;
}
int main()
{
    float array[15];
    int i=0;
    char choice;
    float retVal;
    float temp;
    printf("enter numbers (maximum 15 numbers and enter negative value to stop :: ");
    while(1)  /* infinite while loop to read number from console and it will break when negative number is entered */
    {
        scanf("%f",&temp);
        if(temp<0)
            break;
        
        array[i]=temp; 
        i++;
    }
    
    
    printf("\nenter m for mean \n h for highest number in given elements \n l for lowest number in given elements \n s for sum of given elements :: ");
    scanf(" %c",&choice); 
    switch(choice) /*switch case to call desired function */
    {
        case 'm':
            retVal = geometricMean(array,i);
            printf("\ngeometric Mean of given values is :: %f",retVal);
            break;
        case 'h':
            retVal = highestNumber(array,i);
            printf("\nThe highest numbe in given values is :: %f",retVal);
            break;
        case 'l':
            retVal = lowestNumber(array,i);
            printf("\nthe lowest number in given values is :: %f",retVal);
            break;
        case 's':
            retVal = sum(array,i);
            printf("\nsum of given values is :: %f",retVal);
            break;
        default:
            printf("\nwrong Choice!!");
            break;
    }

    return 0;
}
