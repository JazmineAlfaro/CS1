#include "Truck.h"

Truck::Truck()
{
    license = " ";
    year = 0;
    llantas = 0;
}

Truck::Truck(const string myLicense, const int myYear,const int myLlantas){
    license = myLicense;
    year = myYear;
    llantas = myLlantas;
}

void Truck:: print(){
    cout<<"Licencia camion: "<<license<<endl;
    cout<<endl;
    cout<<"Year camion: "<<year<<endl;
    cout<<endl;
    cout<<"Nro.de llantas del camion: "<<llantas<<endl;
    cout<< "______________________________________"<<endl;
}
