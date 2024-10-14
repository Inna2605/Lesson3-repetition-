/*Дано натуральне число n. 
Написати програму, яка обчислює факторіал невід’ємних цілих чисел n 
(тобто число ціле і більше за 0). 
Формула обчислення факторіала наведена нижче.
n! = 1*2*3*....*n, (формула обчислення факторіала числа n)
0! = 1 (факторіал 0 дорівнює 1 (за визначенням факторіала))*/

#include<iostream>
using namespace std;
int main() {
	cout <<"Oberit variant:\n"
		<< "1. Chislo fibonachi;\n"
		<< "2. Faktarial;\n";
	int Var;
	cin >> Var;
	switch (Var) {
	case 1: {
		cout << "Vvedite naturalne chislo: ";
		int n, k = 1, c = 0, m = 1, fi = 1;
		//int n1 = 1, n2 = 1;
		cin >> n;
		if (n > 1) {
			do {
				fi *= m;
				/*m = n1 + n2;
				n1 = n2;
				n2 = m;*/
				m = k + m;
				k = m - k;
				c++;
			} while (n > c);
			cout << "\nChislo fibonachi = " << fi << endl;
		}
		else {
			cout << "\nNemozluvo znaytu chislo fibonachi!\n";
		}
	}
		  break;
	case 2:{
		cout << "Vvedite naturalne chislo: ";
		int h, v = 1, b = 1, f = 1;
		cin >> h;
		if (h > 1) {
			do {
				b++;
				f *= b;
				v++;
			} while (h > v);
			cout << "\nFaktarial n! = " << f << endl;
		}
		else if (h == 0 || h == 1) {
			cout << "\nfaktarial n! = 1\n";
		}
		else {
			cout << "\nChislo videmne! Nemozluvo znaytu faktarial!\n";
		}
	}
		break;
	default: cout << "Nevirno vubranuy variant!";
	}
}