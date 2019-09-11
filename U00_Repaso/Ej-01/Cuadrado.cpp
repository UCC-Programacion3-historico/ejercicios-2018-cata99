#include "Cuadrado.h"
#include <math.h>

float Cuadrado::getDiagonal(){
    float diago=0;
    diago=sqrt(pow(ancho,2)+pow(alto,2));
    return diago;
}

float Cuadrado::getperimetro() {
    float perimetro=0;
    perimetro=ancho*alto;
    return perimetro
}

float Cuadrado::getsuperficie() {
    float superficie=0;
    superficie=ancho*alto;
    return superficie;
}