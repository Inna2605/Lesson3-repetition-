/*�������� ��������, ��� ��������� ���� ��� ����� �������� ����� � �������, ����������� ������������.*/

#include<iostream>
using namespace std;
int main() {
	cout << "Vvedite chislo pochatoky diapazony ta kinec diapazony: ";
	int Begin, End, Sum = 0;
	cin >> Begin >> End;
	if (Begin != End) {
		do {
			if (Begin % 2 != 0) {
				Sum += Begin;
			}
			Begin++;
		} while (Begin < End);
		cout << "suma thilux neparnux chisel: " << Sum << endl;
	}
	else {
		cout << "suma thilux neparnux chisel: " << Begin << endl;
	}
	
}