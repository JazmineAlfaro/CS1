#include "Car.h"

Car::Car(){
    license = " ";
    year = 0;
    style = " ";
}


Car::Car(const string myLicense, const int myYear,const string myStyle){
    license = myLicense;
    year = myYear;
    style = myStyle;
}

void Car::print(){
    cout<<"Licencia Carro: "<<license<<endl;
    cout<<endl;
    cout<<"Year carro: "<<year<<endl;
    cout<<endl;
    cout<<"Estilo del carro: "<<style<<endl;
    cout<< "______________________________________"<<endl;
}
