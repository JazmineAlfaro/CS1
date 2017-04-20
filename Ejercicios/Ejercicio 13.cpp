#include <iostream>
using namespace std;

void reversa(int *a, int tam) {
	int temp;
	int d = tam/2;
	int *b = tam
	for(int i=0; i<=d; i++){
		temp = *a;
		*a = *a + tam;
		*a = temp; 
	}
}


int main(){
	int arreglo[] = {1,2,3,4,5,6,7,8,9};
	reversa(&arreglo,9);
	for(int a=0;a<9;a++)
		cout <<arreglo[a];
	
	return 0;
}
