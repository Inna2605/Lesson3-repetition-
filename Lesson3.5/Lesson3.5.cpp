/*На складі є певна кількість ящиків з яблуками (N>=0 — запитується в користувача). 
Необхідно звільнити склад. Машини по черзі під,їжджають і забирають певну кількість ящиків. 
Визначити, скільки машин під,їхало до складу. */

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