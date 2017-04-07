#include <iostream>
using namespace std;

int sum(const int array[], const int length){
	int sum = 0;
	for(int i=0;i<length;sum += array[i++]);
	return sum;
}

int promedio(const int array[],const int length){
    int algo = sum(array, length);
	return float(algo/length);

}

void intercambio(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;

}
void invertir(int array[],int length){
    for(int i = 0;i < length/2; i++)
        intercambio(array[i],array[length-i-1]);
    }

/*

void ordenar(const int array[],const int length){
    for(int i=0;i<length;i++){

//crear una funcion  para saber el tamaño de una cadena
//multiplicacion de matrices

    }

}
*/
int main() {
	int n;
	cout << "Ingrese el tamaño del arreglo: "<<endl;
	cin>>n;
	int array[n];
	cout << "Ingrese los elementos para el arreglo: "<<endl;
	for(int i =0;i<n;i++)
		cin>>array[i];
	cout<<"Suma: "<<sum(array,n)<<endl;
	cout<<"Promedio: "<<promedio(array,n)<<endl;
	invertir(array,n);
	cout<<"Arreglo invertido: ";
	for(int a = 0; a < n; a++ )
		cout << array[a] ;
	return 0;
}
