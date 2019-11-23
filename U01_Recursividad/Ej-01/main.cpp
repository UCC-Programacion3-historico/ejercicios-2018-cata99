#include <iostream>
#include "potencia.h"


using namespace std;

void binario(unsigned int n)
{
    if (n!=0) {
        binario(n / 2);
        cout << n % 2;
    }
    else return;
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
    int n;
    string s[]='hola mundo';
    cout<<"ingrese base y exponente"<<endl;
    int base,exponente;
    cin>>base>>exponente;
    cout<<potencia(base,exponente);
    cout<<reemplazar(s[],12);
}

