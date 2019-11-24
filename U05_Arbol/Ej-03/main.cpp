#include <iostream>
#include "../Arbol/ArbolBinario.h"
using namespace std;
int main() {
    int n;
    cout<<"ingrese cantidad de nodos"<<endl;
    cin>>n;
    int a;
    ArbolBinario<int> arbol;
    for (int i = 0; i < n ; ++i) {
        cout<<" Numero a ingresar en el arbol "<<endl;
        cin>>a;
        arbol.put(a);
    }
    arbol.inorder();
    arbol.postorder();
    arbol.preorder();

}