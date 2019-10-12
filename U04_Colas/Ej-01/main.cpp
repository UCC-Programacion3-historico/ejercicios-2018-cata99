#include <iostream>
#include "../Cola/Cola.h"

using namespace std;
int main()
{
    Cola <int> c1,c2;
    c1.encolar(1);
    c1.encolar(2);
    c1.encolar(3);

    c2.encolar(1);
    c2.encolar(2);
    c2.encolar(3);

    if (c1.iguales(c2))
        std::cout<<"son iguales";
    else
        std::cout <<"son diferentes";
}