

/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/

#ifndef TOURNAMENTMEMBER_H
#define TOURNAMENTMEMBER_H

#include <string>

class TournamentMember {
private:
    std::string firstName;
    std::string lastName;
    std::string birthDate; // Ensure this is declared if used
    static std::string location;

public:
    TournamentMember(const std::string& first, const std::string& last, const std::string& date);
    TournamentMember(const TournamentMember& tm);
    ~TournamentMember();
    static void changeLocation(const std::string& newLocation);
    // Other member functions...
};

#endif 


