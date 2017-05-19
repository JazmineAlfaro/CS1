#include <string>
#include "Vehicle.h"

class Bici:public Vehicle{
    string marca;

public:
    Bici();
    Bici(const string &myLicense,const int myYear,const string &myMarca);
    const string &getMarca();

};

