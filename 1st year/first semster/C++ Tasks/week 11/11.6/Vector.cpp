#include"vector.h"
#include<iostream>
#include<math.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
using namespace std;

//default constructor
Vector::Vector()
{
size = 0;
arr = nullptr;
}

//parameterized constructor
Vector::Vector(int n)
{
size = n;
arr = new double(size);
}

//copy constructor
Vector::Vector(const Vector &obj)
{
size = obj.size;
arr = new double(size);
for(int i=0; i<size; i++)
arr[i] = obj.arr[i];
}

//destructor
Vector::~Vector()
{
delete []arr;
}

//set the size of the vector
void Vector::setSize(int n)
{
size = n;

arr = new double(size);
}

//return the size of the vector
int Vector::getSize()
{
return size;
}

//set the vector
void Vector::setVector(double *ptr)
{
arr = ptr;
}

//function to calculate the norm of the vector
double Vector::norm()
{
double sum = 0;
for(int i=0; i<size; i++)
sum = sum + arr[i]*arr[i];
return sqrt(sum);
}

//function to calculate the addition of two vectors
Vector Vector::add(const Vector &obj) const
{
Vector temp(size);
for(int i=0; i<size; i++)
temp.arr[i] = arr[i] + obj.arr[i];

return temp;
}

//function to calculate the difference of two vectors
Vector Vector::difference(const Vector &obj) const
{
Vector temp(size);
for(int i=0; i<size; i++)
temp.arr[i] = arr[i] - obj.arr[i];

return temp;
}

//function to calculate the scalar product of two vectors
double Vector::product(const Vector &obj) const
{
double prod = 0;
for(int i=0; i<size; i++)
prod = prod + arr[i] * obj.arr[i];

return prod;
}

void Vector::print() {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
