#ifndef CAR_H
#define CAR_H

#include "Vehiculo.h"
#include <string>

class Car:public Vehiculo{
    string style;

public:
    Car();
    Car(const string myLicense, const int myYear,const string myStyle);
    void print();
};

#endif //CAR_H
