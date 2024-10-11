#include <iostream>
using namespace std;
 /* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/

//for integer swapping 
void swapping(int &x,int &y) 
{ 
    int temp;
    temp=x;
    x=y;
    y=temp;
} 

//overloaded for float numbers swapping 
void swapping(float &x1,float &x2) 
{  
    float temp;
    temp=x1;
    x1=x2;
    x2=temp;
} 

//overloaded for character swapping 
void swapping(char &a1,char &a2)
{ 
    char temp;
    temp=a1;
    a1=a2;
    a2=temp;
}
int main(void) 
{
//assigning the values 
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    char str1 = 'O';
    char str2 ='T';
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
//calling the function by just the variables 
    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);
//showing the results 
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    return 0;
}