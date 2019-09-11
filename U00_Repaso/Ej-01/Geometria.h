#ifndef REPASO_GEOMETRIA_H
#define REPASO_GEOMETRIA_H
#include "Color.h"

class Geometria {
protected:
    float ancho;
    float alto;
    Color c;
public:
    Geometria(float an, float al, float co);
    virtual float getsuperficie() =0;
    virtual float getperimetro() =0;
};


#endif //REPASO_GEOMETRIA_H
