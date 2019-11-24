#include <iostream>
#include "../Arbol/ArbolBinario.h"
#include<stdlib.h>
#include <time.h>
int main() {
    ArbolBinario<int> arbol;
    int a[30];
    srand(time(NULL));
    for (int i = 0; i < 30 ; ++i) {
        a[i]=100+(rand()%(501-100));
        arbol.put(a[i]);
    }
    arbol.print();
}