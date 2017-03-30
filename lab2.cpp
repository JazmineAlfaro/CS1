#include <iostream>
using namespace std;

int main() {
	int score[3];
	int c = 0;
	cin >> score[c++];
	cin >> score[c++];
	cin >> score[c++];
	int temp;
	temp = score[0];
	score[0] = score[2];
	score[2] = temp;
	cout << score[0];
	cout << score[1];
	cout << score[2];
	return 0;

}

