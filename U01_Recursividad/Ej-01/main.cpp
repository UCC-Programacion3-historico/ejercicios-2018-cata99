#include <iostream>
#include "potencia.h"


using namespace std;

void asterisco(int num) {
    { int i1=0;
        if (num==1)
            cout<<"*";
        else{
          cout<<"*";
          asterisco(num-1);
    }
}}


int vocales(string cd[])
{ int contador=0;
    if (cd== nullptr)
        return 0;
    else if( == 'a' || *cd == 'e' || *cd == 'o' || *cd == 'i' || *cd == 'u')
        contador=1+vocales(++cd);
    else contador=0+vocales(++cd);

    return contador;
}

 void impares(  int n)
{
    if(n%2==0)
     n--;
    else n-=2;
    std::cout << n << std::endl;
    if (n <= 1)
        return;
    impares(n);
}

int main() {
    //int n;
    string s;
    cout<<"ingrese base y exponente"<<endl;
    int base,exponente;
    cin>>base>>exponente;
    cout<<potencia(base,exponente);
    cout<<"ingrese cadena"<<endl;
    cin>>s;
    cout<<"cantidad de vocales" <<vocales(s);
}

