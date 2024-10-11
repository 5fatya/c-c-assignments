// testcreature.cpp
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
#include "Creature.h"
#include <iostream>

int main() {
    std::cout << "Creating a Creature.\n";
    Creature c;
    c.run();
 
    std::cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();
 
    std::cout << "\nCreating a Dragon.\n";
    Dragon d;
    d.run();
    d.fly();
 
    std::cout << "\nCreating an Elf.\n";
    Elf e;
    e.run();
    e.shootArrow();
 
    return 0;
}
