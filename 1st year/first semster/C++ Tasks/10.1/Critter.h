
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
#ifndef CRITTER_H
#define CRITTER_H

#include <string>

class Critter {
private:
    std::string name;
    double hunger;  // Represented as a double internally
    int boredom;
    double height;
    double thirst;  // New property
    static int doubleToInt(double hungerDouble);
    // Private methods for conversion
    double intToDouble(int hungerInt);
    
public:
    Critter();
    Critter(const std::string &name);
    Critter(const std::string &name, int hunger, int boredom, double height = 10);
    Critter(const std::string &name, int hunger, int boredom, double height, double thirst); // New constructor

    void setHunger(int newHunger);
    int getHunger() const;

    void print() const;
};

#endif // CRITTER_H





