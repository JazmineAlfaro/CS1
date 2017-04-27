#include <iostream>
using namespace std;

int multimat(int mat1[][2],int mat2[][2],int resultado[][2], int a){
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			int suma = 0;
			for(int k=0;k<a;k++)
				suma += mat1[i][k] * mat2[k][j];
		resultado[i][j] = suma;
		}
}
}

int main() {
	int matriz1[][2] = {{1,1},{1,1}};
	int matriz2[][2] = {{1,1},{1,1}};
	int result[2][2];
	multimat(matriz1,matriz2,result,2);
	for(int i=0;i<2;i++)
		for(int j=0;j<2;j++)
			cout<<result[i][j]<<" ";

	return 0;
}

