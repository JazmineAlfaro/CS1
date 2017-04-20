#include <iostream>
using namespace std;

void reversa(int array[], int tam) {
	int temp;
	for(int i=0; i<=(tam/2); i++){
		temp = array[i];
		array[i] = array[tam-i-1];
		array[tam-i-1] = temp; 
	}
}


int main(){
	int arreglo[] = {1,2,3,4,5,6,7,8,9};
	reversa(arreglo,9);
	for(int a=0;a<9;a++)
		cout <<arreglo[a];

	return 0;
}

