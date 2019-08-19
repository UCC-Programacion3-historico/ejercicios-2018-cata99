#include <iostream>
#include "potencia.h"
using namespace std;
int main() {
    cout<<"ingrese base y exponente"<<endl;
    int base,exponente;
    cin>>base>>exponente;
    cout<<potencia(base,exponente);
}