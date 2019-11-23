#include <iostream>
#include "../Pila/Pila.h"
#include <string>
using namespace std;
int main() {
    char s[100];
    std::cout << "Ingrese frase: ";
    std::cin.getline(s, 50);
    char d,h;
    Pila<char> P1;
    Pila<char> aux;
    for (int i = 0; s[i]!='\0' ; ++i) {
        P1.push(s[i]);

    }
    while (!P1.esVacia())
    {
        while(P1.peek()!=' ')
        { d=P1.pop();
        aux.push(d);}
        while(!aux.esVacia())
            {
                h=aux.pop();
                cout<<h;
            }
        if (aux.esVacia()) cout<<P1.pop();
        }

    if(!aux.esVacia())
{
    while(!aux.esVacia())
{
h=aux.pop();
cout<<h;
}
}  }