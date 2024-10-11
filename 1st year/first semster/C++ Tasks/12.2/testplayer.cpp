
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
#include "Player.h"
#include <iostream>
 
int main() {
    // Creating three players with different properties
    Player player1("John", "Doe", "1990-01-01", 9, "Forward", true);
    Player player2("Jane", "Smith", "1992-02-02", 10, "Midfielder", false);
    Player player3("Alex", "Taylor", "1995-03-03", 11, "Defender", true);
 
    // Printing initial information of players
    std::cout << "Initial Information:\n";
    player1.printPlayer();
    player2.printPlayer();
    player3.printPlayer();
 
    // Moving all players to Hamburg
    TournamentMember::changeLocation("Hamburg");
    std::cout << "\nAfter moving to Hamburg:\n";
 
    // Printing information of players after moving
    player1.printPlayer();
    player2.printPlayer();
    player3.printPlayer();
 
    // Incrementing goals for the first player
    player1.incrementGoals();
    std::cout << "\nAfter incrementing goals for the first player:\n";
    player1.printPlayer();
 
    return 0;
}