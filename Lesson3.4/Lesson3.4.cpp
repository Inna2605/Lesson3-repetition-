/*������ �� ������� �������� L. 
���� ������ ������ ������� �������� P. 
������ ����������, �� ������ ������� �������� � ������� �������. 
���������, ������ ������� ����� ������ ������, ���� ������� � ����� ���� �� �쳺.*/

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