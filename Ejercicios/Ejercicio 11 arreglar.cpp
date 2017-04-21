#include <iostream>
using namespace std;

int multimat(int mat1[][],int mat2[][],int resultado[][], int a, int b, int c){
	int i, j, k, suma,multi;
	for(int i=0;i<a;i++)
		for(int j=0;j<b;j++){
			suma = 0;
			for(int k=0;k<c;k++){
				multi = mat1[i][k] * mat2[k][j];
				suma += multi;
			}
			resultado[i][j] = suma; 	
	}
	for(int x=0;x<a;x++)
		for(int y=0;y<c;y++)
			cout<< resultado[x][y];
}

int main(){
	int matriz1[][] ={{1,2},{3,1},{2,1}};
	int matriz2[][] ={{1,2},{2,1}};
	int result[][];
	multimat(matriz1,matriz2,result,3,2,2);
	
	return 0;
 }

