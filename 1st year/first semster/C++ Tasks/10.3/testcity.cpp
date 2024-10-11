#include <iostream>
#include "City.h"
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
int main() {
    City Bremen;
    Bremen.setName("Bremen");
    Bremen.setInhabitants(263456);
    Bremen.setMayor("Mr Bosh");
    Bremen.setArea(6130);

    City Paris;
    Paris.setName("Paris");
    Paris.setInhabitants(2148000);
    Paris.setMayor("Anna");
    Paris.setArea(105.4);

    City London;
    London.setName("London");
    London.setInhabitants(8982000);
    London.setMayor("Mariam");
    London.setArea(1572);

    std::cout << "City: " << Bremen.getName() << ", Inhabitants: " << Bremen.getInhabitants()
              << ", Mayor: " << Bremen.getMayor() << ", Area: " << Bremen.getArea() << " km²\n";

    std::cout << "City: " << Paris.getName() << ", Inhabitants: " << Paris.getInhabitants()
              << ", Mayor: " << Paris.getMayor() << ", Area: " << Paris.getArea() << " km²\n";

    std::cout << "City: " << London.getName() << ", Inhabitants: " << London.getInhabitants()
              << ", Mayor: " << London.getMayor() << ", Area: " << London.getArea() << " km²\n";

    return 0;
}
