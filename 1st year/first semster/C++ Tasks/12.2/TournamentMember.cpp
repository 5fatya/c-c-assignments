
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
// TournamentMember.cpp
#include "TournamentMember.h"
#include <iostream>
#include <cstring>
 
using namespace std;
 
char TournamentMember::location[36] = "Not specified"; // Initializing static location
 
// Empty constructor
TournamentMember::TournamentMember() {
    cout << "Empty constructor called." << endl;
    // Initialize character arrays to empty strings
    firstName[0] = '\0';
    lastName[0] = '\0';
    dateOfBirth[0] = '\0';
}
 
// Parametric constructor
TournamentMember::TournamentMember(const char* firstName, const char* lastName, const char* dateOfBirth) {
    cout << "Parametric constructor called." << endl;
    strncpy(this->firstName, firstName, 35);
    this->firstName[35] = '\0';
    strncpy(this->lastName, lastName, 35);
    this->lastName[35] = '\0';
    strncpy(this->dateOfBirth, dateOfBirth, 10);
    this->dateOfBirth[10] = '\0';
}
 
// Copy constructor
TournamentMember::TournamentMember(const TournamentMember& other) {
    cout << "Copy constructor called." << endl;
    strncpy(firstName, other.firstName, 36);
    strncpy(lastName, other.lastName, 36);
    strncpy(dateOfBirth, other.dateOfBirth, 11);
}
 
// Destructor
TournamentMember::~TournamentMember() {
    cout << "Destructor called for " << firstName << " " << lastName << endl;
}
 
// Setter methods
void TournamentMember::setFirstName(const char* firstName) {
    strncpy(this->firstName, firstName, 35);
    this->firstName[35] = '\0';
}
 
void TournamentMember::setLastName(const char* lastName) {
    strncpy(this->lastName, lastName, 35);
    this->lastName[35] = '\0';
}
 
void TournamentMember::setDateOfBirth(const char* dateOfBirth) {
    strncpy(this->dateOfBirth, dateOfBirth, 10);
    this->dateOfBirth[10] = '\0';
}
 
// Getter methods
const char* TournamentMember::getFirstName() const { return firstName; }
const char* TournamentMember::getLastName() const { return lastName; }
const char* TournamentMember::getDateOfBirth() const { return dateOfBirth; }
 
// Print information
void TournamentMember::printInfo() const {
    cout << "Name: " << firstName << " " << lastName << ", DOB: " << dateOfBirth 
         << ", Location: " << location << endl;
}
 
// Change location
void TournamentMember::changeLocation(const char* newLocation) {
    strncpy(location, newLocation, 35);
    location[35] = '\0';



