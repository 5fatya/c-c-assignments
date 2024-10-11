#include <stdio.h>
#include <stdlib.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/

void read_input(int *** arr, int rows, int columns, int depth){
    // Loop through each dimension of the 3D array.
    for(int i = 0; i<rows; i++) {
        for(int j=0; j<columns; j++){
            for(int k = 0; k<depth; k++){
               // Read an integer from the standard input and store it
                // in the corresponding position of the 3D array.
               scanf("%d",&arr[i][j][k]);
            }
        }
    }
}

int main(void) {
	
	int rows,columns,depth;
	scanf("%d",&rows);
	scanf("%d",&columns);
	scanf("%d",&depth);
	
	int*** array = (int***)malloc(rows * sizeof(int**));
 
    for (int i = 0; i<rows; i++)
    {
        array[i] = (int**)malloc(columns * sizeof(int*));
 
        for (int j = 0; j<depth; j++)
        {
            array[i][j] = (int*)malloc(depth * sizeof(int));
        }
    }
	

	read_input(array,rows,columns,depth);
	
	for (int k =0; k<depth; k++) {
	    //print the 2d-array at this depth(height)
	    printf("Section %d:\n",k+1);
	    
	    for(int i=0; i<rows; i++){
	        for(int j=0; j<columns; j++){
	            printf("%d ",array[i][j][k]);
	        }
	        printf("\n"); //end of row
	    }
	}
	
	// deallocate memory
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
			free(array[i][j]);

		free(array[i]);
	}
	free(array);
	
	return 0;
}