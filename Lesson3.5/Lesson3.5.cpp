/*�� ����� � ����� ������� ����� � �������� (N>=0 � ���������� � �����������). 
��������� �������� �����. ������ �� ���� ��,�������� � ��������� ����� ������� �����. 
���������, ������ ����� ��,����� �� ������. */

#include<iostream>
using namespace std;
int main() {
	cout << "Vvedite kilkist yaschikiv yablyk na sklady: ";
	int N, Y, K = 0;
	cin >> N;
	cout << "\nVvedite skilki yaschikiv yabluk odna avtivka moze yveztu za odun raz: ";
	cin >> Y;
	if (N > 0) {
		do {
			N -= Y;
			K++;
		} while (N >= 1);
		cout << "\nVsogo avtivok do sklady pidihalo " << K << endl;
	}
	else{
		cout << "\n 0 avtivok!\n";
	}
}