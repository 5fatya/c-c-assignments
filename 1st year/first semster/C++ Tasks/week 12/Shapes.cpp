#include "Shapes.h"
#include <iostream>
#include <cmath>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
Shape::Shape(const std::string& n) : name(n) {}
Shape::Shape() : name("unknown shape") {}
Shape::Shape(const Shape& other) : name(other.name) {}
void Shape::printName() const { std::cout << name << std::endl; }

CenteredShape::CenteredShape(const std::string& n, double nx, double ny)
    : Shape(n), x(nx), y(ny) {}
CenteredShape::CenteredShape() : Shape(), x(0), y(0) {}
CenteredShape::CenteredShape(const CenteredShape& other)
    : Shape(other), x(other.x), y(other.y) {}
void CenteredShape::move(double nx, double ny) { x = nx; y = ny; }

RegularPolygon::RegularPolygon(const std::string& n, double nx, double ny, int edges)
    : CenteredShape(n, nx, ny), edgesNumber(edges) {}
RegularPolygon::RegularPolygon() : CenteredShape(), edgesNumber(0) {}
RegularPolygon::RegularPolygon(const RegularPolygon& other)
    : CenteredShape(other), edgesNumber(other.edgesNumber) {}

Circle::Circle(const std::string& n, double nx, double ny, double r)
    : CenteredShape(n, nx, ny), radius(r) {}
Circle::Circle() : CenteredShape(), radius(0) {}
Circle::Circle(const Circle& other)
    : CenteredShape(other), radius(other.radius) {}

Hexagon::Hexagon(const std::string& n, double nx, double ny, double newSide, const std::string& newColor)
    : RegularPolygon(n, nx, ny, 6), side(newSide), color(newColor) {}
Hexagon::Hexagon(const Hexagon& h)
    : RegularPolygon(h), side(h.side), color(h.color) {}
Hexagon::~Hexagon() {}

void Hexagon::setSide(double newSide) { side = newSide; }
void Hexagon::setColor(const std::string& newColor) { color = newColor; }
double Hexagon::getSide() const { return side; }
std::string Hexagon::getColor() const { return color; }
double Hexagon::perimeter() const { return 6 * side; }
double Hexagon::area() const { return (3 * sqrt(3) / 2) * side * side; }
