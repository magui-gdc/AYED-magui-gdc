#include <iostream>

using namespace std;

int main()
{
	int n1, n2, n3;
	cout << "Ingrese los tres nros: " << endl;
	cin >> n1 >> n2 >> n3;
	cout << "Se ingresó: " << n1 << " - " << n2 << " - "<< n3 << endl;
	cout << "Ordenados: ";
	if (n1 < n2) {
		if (n2 < n3) { //ya estaban ordenados
			cout << n1 << " - " << n2 << " - "<< n3 << endl;
		} else { //tres antes que dos
			if (n1 < n3) { // tres entre uno y dos
				cout << n1 << " - " << n3 << " - "<< n2 << endl;
			} else { // tres antes que uno y dos
				cout << n3 << " - " << n1 << " - "<< n2 << endl;
			}
		}
	} else { //dos antes que uno
		if (n1 < n3) { //tres al final
			cout << n2 << " - " << n1 << " - "<< n3 << endl;
		} else { // tres antes que uno
			if (n2 < n3) { // tres entre dos y uno
				cout << n2 << " - " << n3 << " - "<< n1 << endl;
			} else { // tres antes que dos y uno
				cout << n3 << " - " << n2 << " - "<< n1 << endl;
			}
		}
	}
	return 0;
}
