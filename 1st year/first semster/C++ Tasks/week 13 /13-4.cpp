#include<iostream>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
using namespace std;

class A
{
    protected: int x; // changed from 'private' to 'protected'

    public:
    void setX(int i) {x = i;}
    void print() { cout << x << endl; } // added 'endl' to move the cursor to the next line
};
 
class B: public A
{
    public:
    B() { setX(10); }
};
 
class C: public A  
{
    public:
    C() { setX(20); }
};
 
class D: public B, public C {
    public:
    void print() { cout << "D(" << B::x << ", " << C::x << ")" << endl; } // added this function to 'class D'
};
 
int main()
{
    D d;
    d.print(); // this now calls the print() function from 'class D'
    return 0;
}