/*Швачка має тканину довжиною L. 
Вона мусить пошити подушки довжиною P. 
Умовно домовимося, що ширина тканини збігається з шириною подушки. 
Визначити, скільки подушок зможе пошити швачка, якщо множити і ділити вона не вміє.*/

#include<iostream>
using namespace std;
int main() {
	cout << "Vvedite dovzeny tkanunu: ";
	int L, P, K = 0;
	cin >> L;
	cout << "\nVvedite dovzeny podyski: ";
	cin >> P;
	do {
		L -= P;
		K++;
	} while (L >= P);
	cout << "\nKilkist podysek: = " << K << endl;
}