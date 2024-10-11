/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
#include "Critter.h"
#include <iostream>

// Default constructor
Critter::Critter() : name("default_critter"), hunger(0.0), boredom(0), height(5), thirst(0.0) {
    std::cout << "Default constructor called" << std::endl;
}

// Constructor with name only
Critter::Critter(const std::string &name) : name(name), hunger(0.0), boredom(0), height(5), thirst(0.0) {
    std::cout << "Constructor with name only called" << std::endl;
}

// Constructor with name, hunger, and boredom; height defaults to 10 if not provided
// Remove the default argument for height here as it is already in the header file
Critter::Critter(const std::string &name, int hunger, int boredom, double height)
    : name(name), hunger(intToDouble(hunger)), boredom(boredom), height(height), thirst(intToDouble(hunger)) {
    std::cout << "Constructor with name, hunger, boredom, and optional height called" << std::endl;
}

// New constructor with all properties including thirst
Critter::Critter(const std::string &name, int hunger, int boredom, double height, double thirst)
    : name(name), hunger(intToDouble(hunger)), boredom(boredom), height(height), thirst(thirst) {
    std::cout << "Constructor with all properties including thirst called" << std::endl;
}

void Critter::setHunger(int newHunger) {
    hunger = intToDouble(newHunger);
    thirst = intToDouble(newHunger); // Set thirst to same level as hunger
}

int Critter::doubleToInt(double hungerDouble) {
    return static_cast<int>(hungerDouble * 10 + 0.5);
}

int Critter::getHunger() const {
    return doubleToInt(hunger);
}

// Ensure there's only one print method
void Critter::print() const {
    std::cout << "Critter " << name 
              << ": Hunger: " << getHunger() 
              << ", Thirst: " << thirst 
              << ", Boredom: " << boredom 
              << ", Height: " << height 
              << std::endl;
}

double Critter::intToDouble(int hungerInt) {
    return hungerInt / 10.0;
}

