#include "mcd.h"

unsigned int mcd(unsigned int a, unsigned int b) {
    int resto=0;
    if (b==0)
        return a;
    else
        mcd(b,a%b);
}