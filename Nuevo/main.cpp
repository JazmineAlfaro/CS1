#include <iostream>
#include "Vehiculo.h"
#include "Car.h"
#include "Bici.h"
#include "Truck.h"
using namespace std;

int main()
{
    Vehiculo v("a1",365);
    v.print();
    Car c("algo",6489,"style");
    c.print();
    Bici b("bici",68484,"chancha");
    b.print();
    Truck camioncito("algo",5648,4);
    camioncito.print();
}
