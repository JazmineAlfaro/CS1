#include "Bici.h"

Bici::Bici(){
    license = " ";
    year = 0;
    marca = " ";
}

Bici::Bici(const string myLicense,const int myYear,const string myMarca){
    license = myLicense;
    year = myYear;
    marca = myMarca;
}

const string Bici::getMarca(){
    return marca;
}
void Bici::print(){
    cout<<"Licencia de la bicicleta: "<<license<<endl;
    cout<<endl;
    cout<<"Year bicicleta:"<<year<<endl;
    cout<<endl;
    cout<<"Marca de la bicicleta: "<<marca<<endl;
    cout<< "______________________________________"<<endl;
}
