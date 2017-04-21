#include <iostream>

using namespace std;

void invertir(int *arreglo, int tam){
	int fin = tam; //tamaño
	for(int i =0; i<(tam/2);i++){
		int temp;
		int *primero = (arreglo + i); //puntero a la primera posicion
		int *ultimo = (arreglo + fin); // puntero a la ultima posicion
		temp = *primero;
		*primero = *ultimo;
		*ultimo = temp;
		--fin; 
	}
}

int main(){
	int array[] = {1,2,3,4,5,6,7,8,9};
	int len = 8;
	invertir(array,len);
	//probando la funcion
	for(int i=0;i<=len;i++){
		cout<<array[i]<<endl;
	}
	return 0;
}

