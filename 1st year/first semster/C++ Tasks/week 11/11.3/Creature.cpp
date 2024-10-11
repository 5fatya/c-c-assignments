// Creature.cpp
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
#include "Creature.h"
#include <iostream>

// Creature implementations
Creature::Creature() : distance(10) {}

void Creature::run() const { 
    std::cout << "running " << distance << " meters!\n";
}

// Wizard implementations
Wizard::Wizard() : distFactor(3) {}

void Wizard::hover() const {
    std::cout << "hovering " << (distFactor * distance) << " meters!\n";
}

// Dragon implementations
Dragon::Dragon() : wingSpan(15) {}

void Dragon::fly() const {
    std::cout << "Flying " << (wingSpan * distance) << " meters high!\n";
}

// Elf implementations
Elf::Elf() : arrows(5) {}

void Elf::shootArrow() const {
    std::cout << "Shooting " << arrows << " arrows over " << distance << " meters!\n";
}
