#include <iostream>
using namespace std;

void reverse(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	cout << *a << *b; 
}

int main() {
	int x= 15;
	int y = 20;
	reverse(&x,&y);
	
	return 0;
}

