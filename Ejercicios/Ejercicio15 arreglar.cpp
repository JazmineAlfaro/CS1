#include <iostream>
#include <string>
using namespace std;

bool palindrome(string cadena, int size){
	for(int i = 0; i < size/2; i++)
		if(cadena[i] != cadena[size-i-1]) 
			return false;
		return true; 
}

int tam(string palabra){
	int i = 0;
	while(palabra[i]!='\0'){
		i++;
	}
}

int main() {
	string algo = "oh noon h";
	int len = tam(algo);
	/*if(palindrome(algo,len-1))
		cout << "Yay";
	else
		cout <<"Nay";*/
	bool p = palindrome(algo,len); 
	if( p == true)
		cout << "Yay";
	else
		cout <<"Nay";
	return 0;
}

