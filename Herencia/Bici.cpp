#include "Bici.h"

Bici::Bici(){
    license = " ";
    year = 0;
    marca = " ";
}

Bici::Bici(const string &myLicense,const int myYear,const string &myMarca){
    license = myLicense;
    year = myYear;
    marca = myMarca;
}

const string Bici::&getMarca(){
    return marca;
}
