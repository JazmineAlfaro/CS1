#ifndef POLIGONO_H
#define POLIGONO_H


class Poligono{
protected:
    int base;
    int altura;
public:
    Poligono();
    Poligono(float b, float h);
    virtual float area() = 0;
    virtual float perimetro() = 0 ;

};

#endif // POLIGONO_H
