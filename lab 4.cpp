#include <iostream>
using namespace std;

int main() {
	/*
	//numeros primos
	int x;
	cout<<"Ingrese el numero: "<<endl;
	cin>>x;
	for(int i = 2;i<x;i++){
		int cont = 0;
		for(int j = 1;j<=i;j++){
			if(i%j == 0)
				cont++;
		}
		if(cont == 2)
			cout<< i <<endl;
		
	}
	*/
	
	//fibonacci
	int x;
	cout<<"Ingrese fibonacci de: "<<endl;
	cin>> x;
	
	//int x=6;
	int arreglo[6];
	int i;
	for(i=0;i<6;i++){
		if(i=0)
			arreglo[i] == 0;
		if(i=1)
			arreglo[i] == 1;
		arreglo[i] = arreglo[i-1] + arreglo[i-2];
	}
	for(int a=0;a<6;a++)
		cout <<arreglo[a];
	return 0;
}

