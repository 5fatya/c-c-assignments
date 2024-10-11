#include <stdio.h>
/* CH-230-A
   (problem2-1.c)
   Fatima Fares
   ffares@jacobs-university.de
*/

int main() {
    int n;
    scanf("%d", &n); 

    double v[n], w[n]; 

    
    for (int i = 0; i < n; i++) {
        scanf("%lf", &v[i]);
    }

    
    for (int i = 0; i < n; i++) {
        scanf("%lf", &w[i]);
    }

    double total = 0; // Initialize a variable to store the scalar product

    
    for (int i = 0; i < n; i++) {
        total += v[i] * w[i];
    }

    double smallest, largest; 
    int smallp, largep; 

    smallest = v[0]; 
    largest = v[0];  
    smallp = 0;      
    largep = 0;      

    // Find the smallest and largest values in v and their positions
    for (int i = 0; i < n; i++) {
        if (v[i] < smallest) {
            smallest = v[i];
            smallp = i;
        }
        if (v[i] > largest) {
            largest = v[i];
            largep = i;
        }
    }

    // Print the results for v
    printf("Scalar product=%lf\n", total);
    printf("The smallest = %lf\n", smallest);
    printf("Position of smallest = %d\n", smallp);
    printf("The largest = %lf\n", largest);
    printf("Position of largest = %d\n", largep);

    smallest = w[0]; 
    largest = w[0];  
    smallp = 0;      
    largep = 0;      

    // Find the smallest and largest values in w and their positions
    for (int i = 0; i < n; i++) {
        if (w[i] < smallest) {
            smallest = w[i];
            smallp = i;
        }
        if (w[i] > largest) {
            largest = w[i];
            largep = i;
        }
    }

    // Print the results for w
    printf("The smallest = %lf\n", smallest);
    printf("Position of smallest = %d\n", smallp);
    printf("The largest = %lf\n", largest);
    printf("Position of largest = %d\n", largep);

    return 0;
}
