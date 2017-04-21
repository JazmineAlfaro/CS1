#include<iostream>
using namespace std;

int suma(int array[], int tam) {
	if (tam == 0) 
		return array[tam];
	else 
		return suma(array, tam - 1) + array[tam];
} 

int main() {
	int arreglo[]= {1,2,3,4,5};
	int len = 4;
	cout << suma(arreglo, len);
	return 0;
}

