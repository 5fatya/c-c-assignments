#include "Critter.h"
#include <iostream>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
int main() {
    Critter critter1;  // Default constructor
    Critter critter2("Critty");  // Constructor with name only
    Critter critter3("Fluffy", 2, 5);  // Constructor with name, hunger, boredom (default height)
    Critter critter4("Spiky", 2, 5, 7);  // Constructor with all properties

    // Setting hunger levels (if not set already by constructor)
    critter1.setHunger(2);
    critter2.setHunger(2);

    // Printing properties of each critter
    critter1.print();
    critter2.print();
    critter3.print();
    critter4.print();

    return 0;
}

