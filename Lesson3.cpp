/*Розробити програму, яка виводить на екран горизонтальну лінію із символів. 
Кількість символів, який використовувати символ, 
і яка буде лінія — вертикальна чи горизонтальна — вказує користувач.*/

#include<iostream>
using namespace std;
int main() {
	cout << "Vvedite sumbol z yakogo mae butu liniya: ";
	char simbol;
	cin >> simbol;
	cout << "Skilku sumboliv mae butu v liniyi: ";
	int n, N, a = 0;
	cin >> n;
	cout << "Oberite yaka mae butu liniya:\n"
		<< "1. vertikalna\n"
		<< "2. horizantalna\n";
	cin >> N;
	if (N == 1 && n >= 0) {
		while(n > a) {
			cout << simbol << endl;
			a++;
		}
	}
	else if (N == 2) {
		while (n > a) {
			cout << simbol;
			a++;
		}
	}
	else {
		cout << "ne virni parametru!!!";
	}
	cout << endl;
}