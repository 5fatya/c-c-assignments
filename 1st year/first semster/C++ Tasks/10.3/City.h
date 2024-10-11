#ifndef CITY_H
#define CITY_H
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
#include <string>

class City {
private:
    std::string name;
    int inhabitants;
    std::string mayor;
    double area;

public:
    City();  // Default constructor
    // Setter methods
    void setName(const std::string& newName);
    void setInhabitants(int newInhabitants);
    void setMayor(const std::string& newMayor);
    void setArea(double newArea);

    // Getter methods
    std::string getName() const;
    int getInhabitants() const;
    std::string getMayor() const;
    double getArea() const;
};

#endif // CITY_H
