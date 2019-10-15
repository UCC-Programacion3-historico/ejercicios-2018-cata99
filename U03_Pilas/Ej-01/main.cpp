#include <iostream>
#include "../Pila/Pila.h"
#include <string>
using namespace std;
int main() {
    char s[12]="hola mundo";
    char d,h;
    Pila<char> P1;
    Pila<char> aux;
    for (int i = 0; s[i]!='\0' ; ++i) {
        P1.push(s[i]);

    }
    while (!P1.esVacia())
    {
        if(P1.pop()==' ')
            while(!aux.esVacia())
            {
                h=aux.pop();
                cout<<h;
            }
        else
        {
         d=P1.pop();
         aux.push(d);
        }
    }
}