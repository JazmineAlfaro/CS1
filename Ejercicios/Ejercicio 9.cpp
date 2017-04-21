#include <iostream>
using namespace std;


void insercion(int array[], int tam){
	for(int i=0;i<tam;i++){
		int x = array[i];
		int j = i;
		while(j>0 && array[j-1]>x){
			array[j] = array[j-1];
			j-=1;
			array[j] = x;
		}
	}
	for(int a=0;a<9;a++){
		cout << array[a];
	}
	
}

int main() {
	int arreglo[] = {9,5,3,6,8,4,7,2,1};
	int len = 9;
	insercion(arreglo, len);
	return 0;
}

