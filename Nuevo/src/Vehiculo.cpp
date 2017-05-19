#include "Vehiculo.h"

Vehiculo::Vehiculo(){
    license = "";
    year = 0;
}

Vehiculo::Vehiculo(const string myLicense, const int myYear){
    license = myLicense;
    year = myYear;
}

const string Vehiculo::getLicense(){
    return license;
}
const int Vehiculo::getYear(){
    return year;
}

void Vehiculo::print(){
    cout<<"Licencia Vehiculo: "<<license<<endl;
    cout <<endl;
    cout<<"Year Vehiculo: "<<year<<endl;
    cout<< "______________________________________"<<endl;
}


