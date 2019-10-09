#include <iostream>
#include "potencia.h"


using namespace std;
int asterisco(int num) {
    { int i1=0;
        if (num==1)
            return 1;
        else
            i1= 1 + asterisco(num - 1);
        return i1;
    }
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
    cout<<"ingrese base y exponente"<<endl;
    int base,exponente;
    cin>>base>>exponente;
    cout<<potencia(base,exponente);

}

