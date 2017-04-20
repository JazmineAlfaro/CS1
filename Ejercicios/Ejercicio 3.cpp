#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	int num;
	cout << "Ingrese -1 si quiere terminar el programa" << endl;
	cout<< "Ingrese un numero : " <<endl;
	cin >> num;
	

	while(num != -1){
		if (num%2 == 0)
			cout << "El numero si es par"<<endl;
		else
			cout << "El numero no es par"<<endl;
		cout<< "Ingrese un numero : " <<endl;
		cin >> num;
	}
	if(num == -1){
		cout << "El programa finalizo" << endl;
		exit(0);
	}
	

	return 0;
}
	
