#include <iostream>
#include "sumatoria.h"
using namespace std;

int main() {
    int i;
    cout<<"ingrese cantidad de elementos del arreglo "<<endl;
    cin>>i;
    int a[i];
    for (int j=0;j<i;j++)
        cin>>a[j];
    int s=sumatoria(a,i);
    cout<<" la sumatoria total es "<<s<<endl;
}