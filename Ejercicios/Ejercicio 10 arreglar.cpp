#include <iostream>
using namespace std;
//p es el punto inicial
//r es el punto final

int mezcla(int lista[],int p,int q,int r){
	int n1 = q-p+1;
	int n2 = r-q;
	int lista1[n1+1];
	int lista2[n2+1];
	for(int i=1;i<n1;i++){
		lista1[i] = lista[p+i-1];
	}
	for(int j=1;j<n2;j++){
		lista2[j] = lista[q+j];
	}
	lista1[n1+1] = '\0';
    	lista2[n2+1] = '\0';
    	int i = 1,j = 1;
	for(int k = p;k<r;r++){
		if(lista1[i] <= lista2[j]){
		    lista[k] = lista1[i];
		    i++;
		}
        	else{
            	lista[k] = lista2[j];
            	j++;
       		}
    	}	

}
int mergesort(int lista[],int p,int r){
	if(p < r){
		int q = (p+r)/2;
		mergesort(lista,p,q);
		mergesort(lista,q+1,r);
		mezcla(lista,p,q,r);
	}
}

int main(){
	int listita[] ={5,9,4,2,1,6,3};
	int inicio = 0;
	int fin = 7;
	mergesort(listita,inicio,fin);
    	for(int i=0;i<7;i++){
        	cout<<listita[i];
    }

	return 0;
}


