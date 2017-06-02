#include "Conserje.h"

Conserje::Conserje(){
    name = " ";
    DNI = 00000000;
    salario = 0.0;
    empresa = " ";
    lugar = " ";
}

Conserje::Conserje(string nombre, int id, double paga,string e,string l){
    name = nombre;
    DNI = id;
    salario = paga;
    empresa = e;
    lugar = l;

}

void Conserje::imprimir(){
    cout << "Datos del Conserje: "<<endl;
    cout<<"Nombre: "<< name <<endl;
    cout<<"DNI: "<< DNI<<endl;
    cout<<"salario: " << salario <<endl;
    cout<<"Empresa: "<< empresa<<endl;
    cout << "Lugar: "<< lugar << endl;
    cout << endl;




}
