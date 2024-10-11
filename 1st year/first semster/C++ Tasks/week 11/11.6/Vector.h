#ifndef VECTOR_H
#define VECTOR_H
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/

class Vector
{
private:
double *arr;
int size;
public:
Vector();
Vector(int n);
Vector(const Vector &obj);
~Vector();
void setSize(int n);
int getSize();
void setVector(double *ptr);
double norm();
Vector add(const Vector &obj) const;
Vector difference(const Vector &obj) const;
double product(const Vector &obj) const;
void print();
};

#endif
 