
#include <iostream>
#include <string>
using namespace std;

int sum(int array[],int tam) {
	int sum = 0;
	for(int i = 0; i < tam; sum += array[i++]);
		return sum;
	}
	

int main() {
	//ingresar elementos
	int arreglo[5];
	cout<<"Ingrese elementos para el arreglo" <<endl;
	for(int i=0;i<5;i++)
		cin>>arreglo[i];
	/*
	//suma
	int cont = 0;
	for(int i=0;i<5;i++)
		cont += arreglo[i];

	//imprimir invertido
	for(int i=1;i<6;i++)
		cout<< arreglo[5-i];
	*/
	//ordenar 
	int a=0;
	for(int i=0;i<5;i++)
		if(arreglo[i]>a)
			a = arreglo[i];
	cout <<a;	
	
	//cout << "La suma de los elementos del arreglo es : " << cont << endl;
	//cout << "El promedio de los elementos del arreglo es : " << cont/float(5)<< endl;
	
	return 0;
}
