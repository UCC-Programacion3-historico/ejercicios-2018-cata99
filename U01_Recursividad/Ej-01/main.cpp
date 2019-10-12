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
}
   // void asterisco(int num) {
   //{ int i1=0;
     //       if (num==0)
       //         return;
         //   else{
           //     cout<<"*";
             //   asterisco(num-1);
           // }
        //}
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

