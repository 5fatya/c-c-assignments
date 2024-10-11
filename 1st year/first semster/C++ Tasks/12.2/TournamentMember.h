
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
#include "TournamentMember.h"
#include <iostream>
 
std::string TournamentMember::location = "Default Location";
 
TournamentMember::TournamentMember(const std::string& first, const std::string& last, const std::string& date) 
    : firstName(first), lastName(last), birthDate(date) {
    std::cout << "TournamentMember constructed\n";
}
 
TournamentMember::TournamentMember(const TournamentMember& tm)
    : firstName(tm.firstName), lastName(tm.lastName), birthDate(tm.birthDate) {
    std::cout << "TournamentMember copy constructed\n";
}
 
TournamentMember::~TournamentMember() {
    std::cout << "TournamentMember destructed\n";
}
 
void TournamentMember::changeLocation(const std::string& newLocation) {
    location = newLocation;
}
