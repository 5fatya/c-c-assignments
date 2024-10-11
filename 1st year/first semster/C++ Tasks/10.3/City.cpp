#include "City.h"
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
City::City() : name(""), inhabitants(0), mayor(""), area(0.0) {
    // Empty body - Initialization list takes care of default values
}

void City::setName(const std::string& newName) {
    name = newName;
}

void City::setInhabitants(int newInhabitants) {
    inhabitants = newInhabitants;
}

void City::setMayor(const std::string& newMayor) {
    mayor = newMayor;
}

void City::setArea(double newArea) {
    area = newArea;
}

std::string City::getName() const {
    return name;
}

int City::getInhabitants() const {
    return inhabitants;
}

std::string City::getMayor() const {
    return mayor;
}

double City::getArea() const {
    return area;
}


