//
// Created by Catalina on 11/10/2019.
//

#ifndef PROGRAMACION3_COLAPRIORIDAD_H
#define PROGRAMACION3_COLAPRIORIDAD_H

#include "../Cola/Cola.h"
class ColaPrioridad{
private:
    Cola<int> colas[10];
public:
    void encolar(int d, int prioridad)
    {
        if(prioridad>=0&&prioridad <10)
        colas[prioridad].encolar(d);
        else throw 525;
    }

    int desencolar()
    {
        for (int i = 0; i < 10; ++i) {
            if (!colas[i].esVacia())
                return colas[i].desencolar();
        }
        throw 404;

    }

};
#endif //PROGRAMACION3_COLAPRIORIDAD_H
