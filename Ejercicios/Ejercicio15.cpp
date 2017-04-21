#include <iostream>
#include <string>
using namespace std;

bool palindrome(char* inicio, char* fin){
	// inicio es un puntero a la primera posicion
	// fin es un puntero a la ultimo posicion
	while(inicio < fin){
		if(*inicio != *fin)
			return false;
		inicio++;
		fin--;
	}
	return true;
}	
	
int tam(char* palabra){
	int i = 0;
	while(*palabra!='\0'){
		i++;
		*palabra++;
	}
	return i;
}

int main() {
	char* algo = "aja";
	int len = tam(algo)-1;
	if(palindrome(algo,(algo+len)))
		cout<< "Yay";
	else
		cout << "Nay";

	return 0;
}

