#include "Color.h"
Color::Color(int p);
{
    c=p;
}

int Color::getcolor() {
    return c;
}

void Color::tenircolor(int n)
{
    c=n;
}