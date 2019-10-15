#include <iostream>
#include "digitos.h"
using namespace std;
int binario (int n)
{
    if(n<2)
    {
        return n;
    } else
        return n%2+(10*binario(n/2));
}
int main() {
    int a,b;
    cout<<"ingrese los numeros "<<endl;
    cin>>a>>b;
    cout<<"parte real de la division "<<cociente(a,b)<<endl;
    cout<<"espaciado " <<escribir_espaciado(a);
}