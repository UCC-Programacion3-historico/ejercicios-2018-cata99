#include <iostream>
#include "../Lista/Lista.h"

#include "union.h"
using namespace std;


int main()
{
    Lista<int> A,B;
    int d;
    cout<<"introduzca lista a "<<endl;
    for (int i = 0; i <5 ; ++i)
    {
        cin>>d;
        A.insertar(i,d);
    }
    for (int i = 0; i <5 ; ++i)
    {
        cin>>d;
        B.insertar(i,d);
    }
    unir (A,B);

}