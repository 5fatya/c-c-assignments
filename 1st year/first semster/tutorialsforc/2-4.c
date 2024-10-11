/*Write a program that reads from the keyboard three 
float values for the variables a, b and h. 
Compute and print on the screen the areas of: 
the square with the side a, the rectangle with 
the length a and the width b, a triangle with the base a and the height h,
 and a trapezoid with the bases a, b and the height h.*/

 #include <stdio.h>

 int main() {

float a, b, h;

// Reading the float values for a, b, and h
    scanf("%f %f %f", &a, &b, &h);

// Calculating the area of the square (side = a)
    float areaSquare = a * a;

// Calculating the area of the rectangle (length = a, width = b)
    float areaRectangle = a * b;

// Calculating the area of the triangle (base = a, height = h)
    float areaTriangle = 0.5 * a * h;

// Calculating the area of the trapezoid (bases = a and b, height = h)
    float areaTrapezoid = 0.5 * (a + b) * h;

 





    return 0;
 }