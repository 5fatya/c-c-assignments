#include <iostream>
#include "Shapes.h"
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
using namespace std;

int main() {
    // a) Create a blue hexagon with a side of 9
    Hexagon blueHexagon("Blue Hexagon", 0, 0, 9, "blue");

    // b) Create a green hexagon with a side of 15
    Hexagon greenHexagon("Green Hexagon", 0, 0, 15, "green");

    // c) Create a copy of the green hexagon using the copy constructor
    Hexagon greenHexagonCopy(greenHexagon);

    // d) Compute the perimeter and area for each hexagon and print the results
    cout << "Blue Hexagon - Perimeter: " << blueHexagon.perimeter();
    cout << ", Area: " << blueHexagon.area() << endl;

    cout << "Green Hexagon - Perimeter: " << greenHexagon.perimeter();
    cout << ", Area: " << greenHexagon.area() << endl;

    cout << "Green Hexagon Copy - Perimeter: " << greenHexagonCopy.perimeter();
    cout << ", Area: " << greenHexagonCopy.area() << endl;

    return 0;
}
