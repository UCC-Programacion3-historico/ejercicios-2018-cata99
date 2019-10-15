#include <iostream>
#include <string>
#include "../Pila/Pila.h"
using namespace std;
int  main ()
{
    char arr[100];
    Pila<char> P1, aux;
    cout<<"ingrese oracion "<<endl;
    cin.getline(arr,50);
    for (int i = 0; arr[i]!='\0' ; ++i) {
        P1.push(arr[i]);
    }
    while(!P1.esVacia()) {
        while(!P1.esVacia()&& P1.peek()!=' ')
            aux.push(P1.pop());

        while(!aux.esVacia())
                cout<<aux.pop();
        if(!P1.esVacia())
            std::cout<<P1.pop();
    }

}


