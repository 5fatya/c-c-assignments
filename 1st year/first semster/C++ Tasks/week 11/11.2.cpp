#include <iostream>
using namespace std;
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/

// Base class Creature
class Creature {
public:
    Creature();  
    void run() const; // Method to demonstrate running

protected:
    int distance; // Distance the creature can run
};

// Implementation of Creature's constructor
Creature::Creature() : distance(10)
{
    // Initializes distance to 10 meters
}    

// Implementation of Creature's run method
void Creature::run() const { 
    cout << "running " << distance << " meters!\n";
    // Outputs running distance
}  

// Derived class Wizard from base class Creature
class Wizard : public Creature {
public:
    Wizard();
    void hover() const; // Method to demonstrate hovering

private:
    int distFactor; // Factor to multiply distance for hovering
};

// Implementation of Wizard's constructor
Wizard::Wizard() : distFactor(3)
{
    // Initializes distFactor to 3
}  

// Implementation of Wizard's hover method
void Wizard::hover() const {
    cout << "hovering " << (distFactor * distance) << " meters!\n";
    // Outputs hovering distance (distance times distFactor)
}

// New derived class Dragon from base class Creature
class Dragon : public Creature {
public:
    Dragon();
    void fly() const; // Method to demonstrate flying

private:
    int wingSpan; // Factor to multiply distance for flying
};

// Implementation of Dragon's constructor
Dragon::Dragon() : wingSpan(15) {
    cout << "Dragon created with wing span " << wingSpan << ".\n";
    // Initializes wingSpan to 15 and outputs a creation message
}

// Implementation of Dragon's fly method
void Dragon::fly() const {
    cout << "Flying " << (wingSpan * distance) << " meters high!\n";
    // Outputs flying height (distance times wingSpan)
}

// New derived class Elf from base class Creature
class Elf : public Creature {
public:
    Elf();
    void shootArrow() const; // Method to demonstrate shooting arrows

private:
    int arrows; // Number of arrows to shoot
};

// Implementation of Elf's constructor
Elf::Elf() : arrows(5) {
    cout << "Elf created with " << arrows << " arrows.\n";
    // Initializes arrows to 5 and outputs a creation message
}

// Implementation of Elf's shootArrow method
void Elf::shootArrow() const {
    cout << "Shooting " << arrows << " arrows over " << distance << " meters!\n";
    // Outputs the number of arrows shot over a distance
}

int main() { 
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();
 
    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();
 
    cout << "\nCreating a Dragon.\n";
    Dragon d;
    d.run();
    d.fly();
 
    cout << "\nCreating an Elf.\n";
    Elf e;
    e.run();
    e.shootArrow();
 
    return 0;
}
