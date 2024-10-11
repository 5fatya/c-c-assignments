#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
class Shape {
private:
    std::string name;

public:
    Shape(const std::string& n);
    Shape();
    Shape(const Shape& other);
    void printName() const;
};

class CenteredShape : public Shape {
private:
    double x, y;

public:
    CenteredShape(const std::string& n, double nx, double ny);
    CenteredShape();
    CenteredShape(const CenteredShape& other);
    void move(double nx, double ny);
};

class RegularPolygon : public CenteredShape {
private:
    int edgesNumber;

public:
    RegularPolygon(const std::string& n, double nx, double ny, int edges);
    RegularPolygon();
    RegularPolygon(const RegularPolygon& other);
};

class Circle : public CenteredShape {
private:
    double radius;

public:
    Circle(const std::string& n, double nx, double ny, double r);
    Circle();
    Circle(const Circle& other);
};

class Hexagon : public RegularPolygon {
private:
    double side;
    std::string color;

public:
    Hexagon(const std::string& n, double nx, double ny, double newSide, const std::string& newColor);
    Hexagon(const Hexagon& h);
    ~Hexagon();

    void setSide(double newSide);
    void setColor(const std::string& newColor);

    double getSide() const;
    std::string getColor() const;

    double perimeter() const;
    double area() const;
};

#endif 
