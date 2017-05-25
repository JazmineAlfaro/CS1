#ifndef TRIANGULO_H
#define TRIANGULO_H

#include <Poligono.h>


class Triangulo : public Poligono{
private:
    float lado;
public:
    Triangulo();
    Triangulo(float b,float h,float l);
    float area();
    float perimetro();
    float getBase();
    float getAltura();
    float getLado();
};

#endif // TRIANGULO_H
