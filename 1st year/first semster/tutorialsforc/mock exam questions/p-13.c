#include <stdio.h>

// Structure to represent an order of coffee
struct coffee {
    unsigned char property; // Stores properties using bit masks
};

// Bit masks for coffee properties
const unsigned char regular = 1 << 0;
const unsigned char espresso = 1 << 1;
const unsigned char double_espresso = 1 << 2;
const unsigned char milk = 1 << 3;
const unsigned char cream = 1 << 4;
const unsigned char soy_milk = 1 << 5;
const unsigned char sugar = 1 << 6;
const unsigned char sweetener = 1 << 7;

// Function to set a property of a coffee
void set_coffee_property(struct coffee* c, const unsigned char property) {
    c->property |= property; // Use bitwise OR to set the specific bit
}

// Function to unset a property of a coffee
void unset_coffee_property(struct coffee* c, const unsigned char property) {
    c->property &= ~property; // Use bitwise AND with the negated property to unset the specific bit
}

// Function to print the properties of a coffee for testing purposes
void print_coffee_properties(const struct coffee* c) {
    printf("Coffee Properties: ");
    if (c->property & regular) printf("Regular ");
    if (c->property & espresso) printf("Espresso ");
    if (c->property & double_espresso) printf("Double Espresso ");
    if (c->property & milk) printf("Milk ");
    if (c->property & cream) printf("Cream ");
    if (c->property & soy_milk) printf("Soy Milk ");
    if (c->property & sugar) printf("Sugar ");
    if (c->property & sweetener) printf("Sweetener ");
    printf("\n");
}

int main() {
    struct coffee myCoffee = {0}; // Initialize the coffee with no properties set

    // Create a regular coffee with milk and sugar
    set_coffee_property(&myCoffee, regular);
    set_coffee_property(&myCoffee, milk);
    set_coffee_property(&myCoffee, sugar);

    // Print the properties of the coffee
    print_coffee_properties(&myCoffee);

    return 0;
}

