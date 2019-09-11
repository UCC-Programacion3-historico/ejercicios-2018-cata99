#ifndef REPASO_CUADRADO_H
#define REPASO_CUADRADO_H
#include "Geometria.h"

class Cuadrado:public Geometria{
public:
    Cuadrado::Cuadrado(float an, float al, float co) : Geometria(an, al, co) {};
    float getDiagonal;
    float getsuperficie();
    float getperimetro();
};


#endif //REPASO_CUADRADO_H
