// Creature.h
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
#ifndef CREATURE_H
#define CREATURE_H

#include <string>

class Creature {
public:
    Creature();  
    void run() const;

protected:
    int distance;
};

class Wizard : public Creature {
public:
    Wizard();
    void hover() const;

private:
    int distFactor;
};

class Dragon : public Creature {
public:
    Dragon();
    void fly() const;

private:
    int wingSpan;
};

class Elf : public Creature {
public:
    Elf();
    void shootArrow() const;

private:
    int arrows;
};

#endif
