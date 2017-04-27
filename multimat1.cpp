#include <iostream>
using namespace std;

int multimat(int mat1[][2],int mat2[][3],int resultado[][3], int a,int b, int c){
	//a = numero de filas de mat1
	//b = numero de columnas de mat2
	//c = numero de filas y columnas de mat1 y mat 2
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			int suma = 0;
			for(int k=0;k<c;k++)
				suma += mat1[i][k] * mat2[k][j];
			resultado[i][j] = suma;
		}
	}
}

int main() {
	int matriz1[3][2] = {{1,2},{0,1},{0,2}};
	int matriz2[2][3] = {{3,4,5},{1,1,0}};
	int result[3][3];
	multimat(matriz1,matriz2,result,3,3,2);
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
		cout<<result[i][j]<<" ";
		return 0;
}
