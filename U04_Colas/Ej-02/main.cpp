#include <iostream>
#include "../Cola/Cola.h"
#include "../Cola/Pila.h"
using namespace std;
template<class T>
bool paliedro (Pila<T> &Lis, Cola<T> &Col)
{
    bool p= false; T l,c;
    while(!Lis.esVacia() && !Col.esVacia())
    {
        l=Lis.pop();
        c=Col.desencolar();
    if (l==' '||p=='.'||p==',')
        l=Lis.pop();
    if (c==' '||c=='.'||c==',')
        c=Col.desencolar();

        if(l==c)
            p=true;
        else {
            p=false;
            return p;
        }}
        return p;
}

int main() {
    Pila<char> P1;
    Cola<char> C1;
    string cola = "la ruta nos aporto otro paso natural";
    for (int i = 0; i < cola.length(); ++i) {
        C1.encolar(cola[i]);
        P1.push(cola[i]);
    }
 //   if (cola.length() == pila.length()) {
        if (paliedro(P1, C1))
            cout << "son paliedros" << endl;
        else
            cout << "no son paliedros" << endl;
   // }
    //else cout<<"no son paliedros "<<endl;
}