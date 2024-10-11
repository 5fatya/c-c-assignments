#include <iostream>
#include"vector.h"
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
using namespace std;

//main function
int main()
{
//create the objects of vectors
Vector v1(5);
Vector v2(v1);
Vector v3(5);

double a[] = {1.2, 2.3, 3.4, 4.5, 5.6};
double b[] = {1.1, 2.2, 3.3, 4.4, 5.5};

//set the vectors
v1.setVector(a);
v3.setVector(b);

//calculate and display the norm of the first vector
double n = v1.norm();
cout<<"The norm of the first vector: "<<n<<endl;

//calculate and display the sum of the first and third vectors
cout<<"The sum of the first and third vectors: "<<endl;
(v1.add(v3)).print();

//calculate and display the difference of the first and third vectors
cout<<"The difference of the first and third vectors: "<<endl;
(v1.difference(v3)).print();

//calculate and display the scalar product of the first and third vectors
cout<<"The scalar product of the first and third vectors: "<<endl;
cout<<v1.product(v3);

return 0;
}