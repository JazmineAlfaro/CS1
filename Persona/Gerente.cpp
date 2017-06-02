#include "Gerente.h"


Gerente::Gerente(){
    name = " ";
    DNI = 00000000;
    salario = 0.0;
    empresa = " ";
    area = " ";
}

Gerente::Gerente(string nombre, int id, double paga,string e,string a){
    name = nombre;
    DNI = id;
    salario = paga;
    empresa = e;
    area = a;
}

void Gerente::imprimir(){
    cout << "Datos del Gerente: "<<endl;
    cout<<"Nombre: "<< name <<endl;
    cout<<"DNI: "<< DNI<<endl;
    cout<<"salario: " << salario <<endl;
    cout<<"Empresa: "<< empresa<<endl;
    cout << "Area: "<< area << endl;
    cout << endl;

}
